#include <stdio.h>

int main() {
    FILE *file;         
    char line[500];     

    file = fopen("Story.txt", "r");

    if (file == NULL) {
        printf("Error: Could not open file Story.txt\n");
        return 1;
    }

    printf("Contents of Story.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
