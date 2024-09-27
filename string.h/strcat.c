// strcat(): Appends one string to the end of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World";
    
    strcat(str1, str2);  // Concatenate str2 to str1
    
    printf("Concatenated string: %s\n", str1);  // Output: Hello World
    
    return 0;
}