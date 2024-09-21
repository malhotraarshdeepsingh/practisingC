// Write a program to read in numbers until the number -999 is encountered. The sum of all numbers read until this point should be printed out

#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    printf("Enter numbers (enter -999 to stop):\n");

    // while (1) starts an infinite loop
    while (1) {
        scanf("%d", &num);
        
        if (num == -999) {
            break;
        }
        
        sum += num;
    }

    printf("The sum of all numbers is: %d\n", sum);

    return 0;
}
