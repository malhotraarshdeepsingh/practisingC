// Write a menu driven program in C having following options, by taking an integer input from the user
// a) To calculate factorial of a number
// b) Whether the number is prime or not
// c) Whether the number is odd or even
// User can enter the choices almost 5 times only.

#include <stdio.h>

int main() {
    int choice, num, i, count, limit = 5;
    unsigned long long factorial;

    while (limit > 0) {
        printf("\nMenu:\n");
        printf("1. Calculate factorial of a number\n");
        printf("2. Check if the number is prime or not\n");
        printf("3. Check if the number is odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Enter a number: ");
        scanf("%d", &num);

        switch (choice) {
            case 1:  // Factorial calculation
                if (num < 0) {
                    printf("Factorial of a negative number doesn't exist.\n");
                } else {
                    factorial = 1;
                    for (i = 1; i <= num; i++) {
                        factorial *= i;
                    }
                    printf("Factorial of %d is %llu.\n", num, factorial);
                }
                break;

            case 2:  // Prime number check
                if (num <= 1) {
                    printf("%d is not a prime number.\n", num);
                } else {
                    count = 0;
                    for (i = 2; i <= num / 2; i++) {
                        if (num % i == 0) {
                            count = 1;
                            break;
                        }
                    }
                    if (count == 0) {
                        printf("%d is a prime number.\n", num);
                    } else {
                        printf("%d is not a prime number.\n", num);
                    }
                }
                break;

            case 3:  // Odd or even check
                if (num % 2 == 0) {
                    printf("%d is an even number.\n", num);
                } else {
                    printf("%d is an odd number.\n", num);
                }
                break;

            default:
                printf("Invalid choice! Please choose between 1-4.\n");
                break;
        }

        limit--;
        printf("You have %d attempts left.\n", limit);
    }

    if (limit == 0) {
        printf("You've reached the maximum number of attempts. Exiting now.\n");
    }

    return 0;
}