#include <stdio.h>
#include <stdlib.h>

int isValid(int x, int y) {
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

int queenMoves(int x, int y) {
    int count = 0;

    // Horizontal and vertical moves
    for (int i = 0; i < 8; i++) {
        if (i != x) count++;
        if (i != y) count++;
    }

    // Diagonal moves
    for (int i = 1; i < 8; i++) {
        if (isValid(x + i, y + i)) count++;
        if (isValid(x + i, y - i)) count++;
        if (isValid(x - i, y + i)) count++;
        if (isValid(x - i, y - i)) count++;
    }

    return count;
}

int main() {
    int x, y;
    
    printf("Enter queen position (x y): ");
    scanf("%d %d", &x, &y);

    printf("Possible moves: %d\n", queenMoves(x, y));
    return 0;
}