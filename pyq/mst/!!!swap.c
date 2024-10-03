#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word1[20], word2[20], word3[20], rest[100];
    int i = 0, j = 0, word_count = 0;

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // to accept string with spaces

    // Variables to store words
    word1[0] = '\0';
    word2[0] = '\0';
    word3[0] = '\0';
    rest[0] = '\0';

    // Parse the string word by word
    for (i = 0, j = 0; str[i] != '\0'; i++) {
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
            } else if (word_count > 3) { // Remaining part of the string
                strncat(rest, &str[i - j], j);
                strcat(rest, " ");
                j = 0;
            }
        } else {
            if (word_count == 0 || word_count == 1 || word_count == 2 || word_count == 3) {
                if (word_count == 0) {
                    word1[j++] = str[i];
                } else if (word_count == 1) {
                    word2[j++] = str[i];
                } else if (word_count == 2) {
                    word3[j++] = str[i];
                }
            } else {
                j++;
            }
        }
    }
    if (j > 0 && word_count == 3) {
        strncat(rest, &str[i - j], j);
    }

    // Output the result with the second and third words swapped
    printf("Output: %s %s %s %s\n", word1, word3, word2, rest);

    return 0;
}