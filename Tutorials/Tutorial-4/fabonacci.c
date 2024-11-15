// Fibonacci series of n numbers using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void displayFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);
    
    printf("Fibonacci series: ");
    displayFibonacci(n);
    
    return 0;
}
