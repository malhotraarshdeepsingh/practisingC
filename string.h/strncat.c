// The strncat() function appends at most n characters from the source string to the destination string.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello ";
    char str2[] = "World";
    
    strncat(str1, str2, 3);  // Append first 3 characters of str2 to str1
    printf("Concatenated string: %s\n", str1);  // Output: Hello Wor
    
    return 0;
}