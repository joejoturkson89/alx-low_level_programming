extern printf  ; the C function to be called
section .data  ; Data section, initialization of varaibles
msg: db "Hello, Holberton", 0;  C string needs 0
fmt: db "%s", 10, 0 	     ; the printf format, "\n",'0'

section .text  ; code section

global main    ; the standard gcc entry point
main: 	       ; the program entry point

push rbp       ; set up stack frame, must be alligned

mov rdi,fmt    
mov rsi,msg
mov rax,0      ; can be xor,rax
call printf    ; call C function
pop rbp        ; restore stack
mov rax,0      ; normal, no error, return value
ret            ; return
