#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word1[20], word2[20], word3[20], rest[100];
    int i = 0, j = 0, word_count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Initialize the words and rest to empty strings
    word1[0] = word2[0] = word3[0] = rest[0] = '\0';

    // Parse the string and extract words
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            word_count++;
            j = 0; // Reset index for the next word
        } else {
            if (word_count == 0) word1[j++] = str[i];
            else if (word_count == 1) word2[j++] = str[i];
            else if (word_count == 2) word3[j++] = str[i];
            else rest[j++] = str[i];
        }
    }
    
    // Null-terminate the words and the rest
    word1[j] = word2[j] = word3[j] = rest[j] = '\0';

    printf("Output: %s %s %s %s\n", word1, word3, word2, rest);

    return 0;
}