#include <stdio.h>

int main() {
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: There are 21 matchsticks.\n");
    printf("You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("Whoever is forced to pick the last matchstick loses the game.\n");

    while (1) {
        // User's turn
        printf("\nThere are %d matchsticks left. Pick 1, 2, 3, or 4 matchsticks: ", matchsticks);
        scanf("%d", &user_pick);

        // Validate user's input
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid input! Please pick between 1 and 4 matchsticks.\n");
            continue;
        }

        // Update remaining matchsticks
        matchsticks -= user_pick;

        // Computer's turn
        computer_pick = 5 - user_pick;
        printf("Computer picks %d matchstick(s).\n", computer_pick);

        // Update remaining matchsticks
        matchsticks -= computer_pick;

        // Check if the user lost
        if (matchsticks == 1) {
            printf("\nOnly 1 matchstick left. You are forced to pick the last one. You lose!\n");
            break;
        }
    }

    return 0;
}