bits 32

global _is_digit
segment data public data use32
segment code public code use32
_is_digit:
    push ebp 
    mov ebp, esp

    mov eax, [ebp+8]

    cmp eax, '0'
    jl false

    cmp eax, '9'
    jg false

    mov eax, 1
    jmp end

    false:
        mov eax, 0
        
    end:
        mov esp, ebp
        pop ebp
        ret
