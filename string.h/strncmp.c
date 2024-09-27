// The strncmp() function compares up to n characters of two strings.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Apology";
    
    int result = strncmp(str1, str2, 3);  // Compare first 3 characters
    
    if (result == 0) {
        printf("Strings are equal in the first 3 characters\n");
    } else {
        printf("Strings differ in the first 3 characters\n");
    }
    
    return 0;
}