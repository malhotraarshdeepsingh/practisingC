// The strchr() function returns a pointer to the first occurrence of a character in the string

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strchr(str, 'W');  // Find 'W'
    
    if (ptr) {
        printf("Character found at position: %ld\n", ptr - str);
    } else {
        printf("Character not found.\n");
    }
    
    return 0;
}