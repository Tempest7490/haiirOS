project_name := haiirOS
kernel := build/$(project_name).bin
iso := build/$(project_name).iso

linker_script := src/linker.ld
asm_src := $(shell find src -name "*.asm")
c_src := $(shell find src -name "*.c")
grub_cfg := src/arch/x86_64/boot/grub.cfg

c_obj := $(patsubst src/%.c, build/obj/c/%.o, $(c_src))
asm_obj := $(patsubst src/arch/x86_64/%.asm, build/obj/asm/%.o, $(asm_src))

CFLAGS := -ffreestanding -z max-page-size=0x1000 -mgeneral-regs-only
CFLAGS += -mno-red-zone -mno-mmx -mno-sse -mno-sse2 -mno-sse3 -mno-3dnow
CFLAGS += -Wall -Wextra -nostdlib -I src -std=gnu99

LDFLAGS := -m elf_x86_64 -nostdlib -T $(linker_script)

all: $(iso)

clean:
	rm -rf build

release: CFLAGS += -O2
release: $(iso)

debug: CFLAGS += -g -O0
debug: $(iso)
	qemu-system-x86_64 -s -S $(iso)

run: CFLAGS += -O2
run: $(iso)
	qemu-system-x86_64 -hda $(iso)

$(iso): $(kernel) $(grub_cfg)
	mkdir -p build/iso/boot/grub
	cp $(kernel) build/iso/boot/$(project_name).bin
	cp $(grub_cfg) build/iso/boot/grub
	grub-mkrescue -o $(iso) build/iso

$(kernel): $(asm_obj) $(linker_script) $(c_obj)
	ld $(asm_obj) $(c_obj) -o $(kernel) $(LDFLAGS)

build/obj/asm/%.o: src/arch/x86_64/%.asm
	mkdir -p $(shell dirname $@)
	nasm -f elf64 $< -o $@

build/obj/c/%.o: src/%.c
	mkdir -p $(shell dirname $@)
	gcc -c $< -o $@ $(CFLAGS)