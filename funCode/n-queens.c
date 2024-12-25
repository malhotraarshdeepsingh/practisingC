#include <stdio.h>
#include <stdbool.h>

#define MAX 8 

int board[MAX][MAX]; 
int solutions = 0;

bool isSafe(int n, int row, int col) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) return false;
    }

    // Check upper-left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }

    // Check upper-right side
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 1) return false;
    }

    return true;
}

void solveNQueens(int n, int row) {
    if (row == n) {
        solutions++;
        printf("Solution %d:\n", solutions);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%c ", board[i][j] ? 'Q' : '.');
            }
            printf("\n");
        }
        printf("\n");
        return;
    }

    // Try placing a queen in each column of the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(n, row, col)) {
            board[row][col] = 1; 
            solveNQueens(n, row + 1); 
            board[row][col] = 0; 
        }
    }
}

int main() {
    int n;

    printf("Enter the value of N (1-%d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid value for N. Please enter a value between 1 and %d.\n", MAX);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = 0;
        }
    }

    solveNQueens(n, 0);

    if (solutions == 0) {
        printf("No solutions exist for N = %d.\n", n);
    } else {
        printf("Total solutions for N = %d: %d\n", n, solutions);
    }

    return 0;
}
