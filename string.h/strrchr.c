// The strrchr() function returns a pointer to the last occurrence of a character in the string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strrchr(str, 'l');
    
    if (ptr) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}