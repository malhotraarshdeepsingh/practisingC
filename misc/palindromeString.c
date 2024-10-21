#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Check if the string is a palindrome by comparing characters from both ends
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = 0; // If characters don't match, it's not a palindrome
            break;
        }
    }

    if(isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}