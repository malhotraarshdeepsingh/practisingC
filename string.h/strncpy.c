// The strncpy() function copies up to n characters from the source string into the destination string.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[20];
    
    strncpy(str2, str1, 4);  // Copy first 4 characters from str1 to str2
    str2[4] = '\0';          // Manually add the null terminator, because it was giving Hella as output it was due to the fact that strncpy() doesn't add the null terminator.
    printf("Copied string: %s\n", str2);  // Output: Hell
    
    return 0;
}