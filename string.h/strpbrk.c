// This function finds the first character in the string s1 that matches any character specified in s2 (It excludes terminating null-characters).

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char accept[] = "aeiou";  // Characters to search for (vowels)

    // Find the first vowel in the string
    char *result = strpbrk(str, accept);

    if (result) {
        printf("First matching character: %c\n", *result);  // Output: 'e'
    } else {
        printf("No matching characters found.\n");
    }

    return 0;
}