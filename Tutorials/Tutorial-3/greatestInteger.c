// To find greatest of 3 integers using ternary operator.
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int greatest = (a >= b) ? ( (a >= c) ? a : c ) : ( (b >= c) ? b : c);
    printf("The greatest of the three numbers is: %d\n", greatest);
    return 0;
}
