#include "exceptions.h"

__attribute__(( interrupt ))
void exc0 ( struct interrupt_frame* frame ) {
    println( "Exception0: divide by zero" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc1 ( struct interrupt_frame* frame ) {
    println( "Exception1: debug" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc2 ( struct interrupt_frame* frame ) {
    println( "Exception2: non maskable interrupt" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc3 ( struct interrupt_frame* frame ) {
    println( "Exception3: breakpoint" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc4 ( struct interrupt_frame* frame ) {
    println( "Exception4: overflow" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc5 ( struct interrupt_frame* frame ) {
    println( "Exception5: bound_range_overflow" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc6 ( struct interrupt_frame* frame ) {
    println( "Exception6: invalid_opcode" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc7 ( struct interrupt_frame* frame ) {
    println( "Exception7: device not available" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc8 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception8: double fault" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}

__attribute__(( interrupt ))
void exc9 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception9: invalid_tss" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}

__attribute__(( interrupt ))
void exc10 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception10: segment_not_present" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}

__attribute__(( interrupt ))
void exc11 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception11: stack_segment_fault" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}
__attribute__(( interrupt ))

void exc12 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception12: general_protection_fault" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}

__attribute__(( interrupt ))
void exc13 ( struct interrupt_frame* frame ) {
    println( "Exception13: page_fault" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc14 ( struct interrupt_frame* frame ) {
    println( "Exception14: x87_floating_point" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc15 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception15: alignment_check" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}

__attribute__(( interrupt ))
void exc16 ( struct interrupt_frame* frame ) {
    println( "Exception16: machine_check" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc17 ( struct interrupt_frame* frame ) {
    println( "Exception17: simd_floating_point" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc18 ( struct interrupt_frame* frame ) {
    println( "Exception18: virtualization" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
}

__attribute__(( interrupt ))
void exc19 ( struct interrupt_frame* frame, uint64_t err_code ) {
    println( "Exception19: security_exception" );
    println( "  instruction pointer: %x", frame->rip );
    println( "  code seg: %x", frame->cs );
    println( "  rflags: %d", frame->rflags );
    println( "  stack pointer: %x", frame->rsp );
    println( "  stack seg: %x", frame->ss );
    println( "  err_code: %x", err_code );
}



void init_exceptions() {
    init_gate( 0, ( uint64_t )exc0, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 1, ( uint64_t )exc1, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 2, ( uint64_t )exc2, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NO_MASKABLE_INT );
    init_gate( 3, ( uint64_t )exc3, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 4, ( uint64_t )exc4, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 5, ( uint64_t )exc5, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 6, ( uint64_t )exc6, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 7, ( uint64_t )exc7, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 8, ( uint64_t )exc8, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_DOUBLE_FAULT );
    init_gate( 9, ( uint64_t )exc9, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 10, ( uint64_t )exc10, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 11, ( uint64_t )exc11, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 12, ( uint64_t )exc12, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 13, ( uint64_t )exc13, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 14, ( uint64_t )exc14, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 15, ( uint64_t )exc15, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 16, ( uint64_t )exc16, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 17, ( uint64_t )exc17, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 18, ( uint64_t )exc18, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    init_gate( 19, ( uint64_t )exc19, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
    
    for ( uint64_t i = 20; i < 31; i++ )
        init_gate( i, ( uint64_t )interrupt_handler, CODE_SEG, GATE_PRESENT | INTERRUPT_GATE, IST_NONE );
}