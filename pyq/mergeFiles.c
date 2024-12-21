// Write a program in C that merges lines alternately from two files and writes the results to new file. If one file has less number of lines than the other, the remaining lines from the larger file should be simply copied into the target file.
// Assume: Each line in a file ends with ‘.’ (full stop).

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

void mergeFiles(const char *file1, const char *file2, const char *outputFile) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *out = fopen(outputFile, "w");

    if (fp1 == NULL || fp2 == NULL || out == NULL) {
        printf("Error: Unable to open one or more files.\n");
        exit(1);
    }

    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    int readFile1 = 1, readFile2 = 1;

    while (readFile1 || readFile2) {
        if (readFile1 && fgets(line1, MAX_LINE_LENGTH, fp1)) {
            fputs(line1, out);
        } else {
            readFile1 = 0;
        }

        if (readFile2 && fgets(line2, MAX_LINE_LENGTH, fp2)) {
            fputs(line2, out);
        } else {
            readFile2 = 0;
        }
    }

    printf("Files merged successfully into %s\n", outputFile);

    fclose(fp1);
    fclose(fp2);
    fclose(out);
}

int main() {
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *outputFile = "merged.txt";

    mergeFiles(file1, file2, outputFile);

    return 0;
}
