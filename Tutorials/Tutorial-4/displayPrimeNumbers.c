// Display first n prime numbers.
#include <stdio.h>

int isPrime(int n, int i) {
    if (n <= 2) return (n == 2) ? 1 : 0;
    if (n % i == 0) return 0;
    if (i * i > n) return 1;

    return isPrime(n, i + 1);
}

void displayNPrimes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num, 2)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of prime numbers to display: ");
    scanf("%d", &n);
    
    printf("First %d prime numbers: \n", n);
    displayNPrimes(n);
    
    return 0;
}
