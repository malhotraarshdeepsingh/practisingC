// strcmp(): Compares two strings lexicographically. It interanally subtracts askaii values of characters and returns the difference.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Apple";
    char str2[] = "Banana";
    
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("String1 is less than String2\n");
    } else {
        printf("String1 is greater than String2\n");
    }
    
    return 0;
}