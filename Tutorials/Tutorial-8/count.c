#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; 
        } else if (inWord == 0) {
            inWord = 1; 
            wordCount++;
        }
    }

    fclose(file);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    return 0;
}