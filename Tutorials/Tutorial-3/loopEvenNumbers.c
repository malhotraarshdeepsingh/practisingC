// Read in 20 integers and count the even numbers

#include <stdio.h>

int main() {
    int numbers[20], evenCount = 0;

    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);

        // Checking if the number is even
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    // Displaying the count of even numbers
    printf("The number of even integers: %d\n", evenCount);

    return 0;
}