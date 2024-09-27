// strlen() returns the length of the string, excluding the null character \0.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    printf("Length of string: %zu\n", strlen(str));  
    // Output: 13
    return 0;
}