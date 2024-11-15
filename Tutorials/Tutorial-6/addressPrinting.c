#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Address of x using %%u: %u\n", (unsigned int)&x);
    printf("Address of x using %%p: %p\n", (void *)&x);
    printf("Address of x using %%x: %x\n", (unsigned int)&x);

    // Address of x using %u: 2005284596
    // Address of x using %p: 0x7ffc778636f4
    // Address of x using %x: 778636f4

    // %u: This format specifier is used for printing unsigned integers. The output 2005284596 is the memory address expressed as a decimal number.
    // %p: This format specifier is specifically designed for printing memory addresses. It displays the address in hexadecimal format (base 16), starting with "0x". The output 0x7ffc778636f4 is the same address as before, but in a hexadecimal form.
    // %x: This format specifier is used for printing unsigned integers in hexadecimal format. It prints the address without the "0x" prefix. The output 778636f4 represents the hexadecimal part of the memory address.
    
    return 0;
}
