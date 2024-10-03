#include <stdio.h>

#define SIZE 3

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    int i, j, k;

    printf("Enter elements of the first matrix (3x3):\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix (3x3):\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nTranspose of the first matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = mat1[j][i];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}