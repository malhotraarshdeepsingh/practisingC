#include <stdio.h>
#include <string.h>

int main() {
    char arr[] =  "abcdef" ;
    char search_char = 'd';  // The character to search for

    // Search for the first occurrence of 'd' in the array
    char *result = memchr(arr, search_char, sizeof(arr));

    if (result) {
        printf("Character '%c' found at position: %ld\n", search_char, result - arr);
    } else {
        printf("Character '%c' not found in the array.\n", search_char);
    }

    return 0;
}