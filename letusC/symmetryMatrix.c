#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;
    
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
    }
    
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}
