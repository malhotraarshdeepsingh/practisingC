// strstr(): Finds the first occurrence of a substring within another string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = strstr(str, "World");
    
    if (ptr) {
        printf("Substring found: %s\n", ptr);  // Output: World!
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}