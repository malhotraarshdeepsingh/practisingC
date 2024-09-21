#include<stdio.h>

int main()
{
    int num, leftShift, rightShift;

    printf("Enter a number: ");
    scanf("%d", &num);

    leftShift = num << 1;
    rightShift = num >> 1;

    printf("Left shift: %d\n", leftShift);
    printf("Right shift: %d\n", rightShift);

    return 0;
}