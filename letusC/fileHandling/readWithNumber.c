#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char line[256];
    int line_number = 1;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%d: %s", line_number, line);
        line_number++;
    }

    fclose(file);

    return 0;
}