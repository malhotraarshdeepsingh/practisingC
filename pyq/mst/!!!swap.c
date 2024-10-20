#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word1[20], word2[20], word3[20], rest[100];
    int i = 0, j = 0, word_count = 0;

    // Input string from the user
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    // Parse the string word by word
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // If a space is encountered, finalize the current word
        if (str[i] == ' ' || str[i] == '\n') {
            word_count++;
            if (word_count == 1) { // Store first word
                word1[j] = '\0';
                j = 0;
            } else if (word_count == 2) { // Store second word
                word2[j] = '\0';
                j = 0;
            } else if (word_count == 3) { // Store third word
                word3[j] = '\0';
                j = 0;
            } else {
                rest[j++] = ' '; // Add space for remaining string
            }
        } else {
            // Store characters in respective words or remaining part
            if (word_count == 0) {
                word1[j++] = str[i];
            } else if (word_count == 1) {
                word2[j++] = str[i];
            } else if (word_count == 2) {
                word3[j++] = str[i];
            } else {
                rest[j++] = str[i]; 
            }
        }
    }
    
    // Finalize the last word if necessary
    if (j > 0) {
        if (word_count == 2) {
            word3[j] = '\0'; // If there were exactly 3 words
        } else {
            rest[j] = '\0'; // Null terminate the remaining part
        }
    }
    
    // Output the result with the second and third words swapped
    printf("Output: %s %s %s %s\n", word1, word3, word2, rest);
    return 0;
}