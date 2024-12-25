#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isKnightMoveValid(int x1, int y1, int x2, int y2) {
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 2 && dy == 1) || (dx == 1 && dy == 2);
}

int main() {
    int x1, y1, x2, y2;
    
    printf("Enter knight's start position (x y): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter target position (x y): ");
    scanf("%d %d", &x2, &y2);

    if (isKnightMoveValid(x1, y1, x2, y2)) printf("Valid move\n");
    else printf("Invalid move\n");

    return 0;
}