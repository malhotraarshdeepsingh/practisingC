// strcpy(): Copies the content of one string into another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, World";
    char str2[100];

    // Copy str1 to str2 using strcpy()
    strcpy(str2, str1);
    printf("str2: %s\n", str2);
    // Output:- Hello, World

    return 0;
}