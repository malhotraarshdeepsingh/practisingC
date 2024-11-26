#include <stdio.h>

int main() {
    FILE *fs, *ft;
    char ch;

    fs = fopen("Story.txt", "r");
    if (fs == NULL) {
        puts("Cannot open source file");
        return 1; 
    }

    ft = fopen("copied.txt", "w");
    if (ft == NULL) {
        puts("Cannot open target file");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, ft);
    }

    fclose(fs);
    fclose(ft);

    printf("File copied successfully.\n");
    return 0;
}