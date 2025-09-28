.section .text
.extern kernelMain
.global leader

loader:
    mov $kernel_stack, %esp
    call kernelMain
_stop:
    cli
    hlt
    jmp _stop

.section bss
.space 2*1024*1024
kernel_stack:

