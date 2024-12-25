#include <stdio.h>

void checkSquareColor(char col, int row) {
    // columns are turned to numeric values
    int colIndex = col - 'a';
    // Adding colIndex and row gives a combined value that alternates between odd and even for white or black.
    int color = (colIndex + row) % 2;

    if (color == 0) {
        printf("The square is black.\n");
    } else {
        printf("The square is white.\n");
    }
}

int main() {
    char col;
    int row;


    printf("Enter square (e.g., a1): ");
    scanf(" %c%d", &col, &row);


    checkSquareColor(col, row);
    return 0;
}