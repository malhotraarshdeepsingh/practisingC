#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store player details
typedef struct {
    int id;
    char name[50];
    int score;
} Player;

// Function prototypes
void addPlayer(Player **players, int *count);
void updateScore(Player *players, int count);
void displayPlayers(Player *players, int count);
void saveToFile(Player *players, int count, const char *filename);
void loadFromFile(Player **players, int *count, const char *filename);
void sortPlayers(Player *players, int count);

int main() {
    Player *players = NULL;
    int count = 0;
    int choice;
    const char *filename = "scoreboard.txt";

    // Load existing data from file
    loadFromFile(&players, &count, filename);

    do {
        printf("\nChess Tournament Scoreboard\n");
        printf("1. Add Player\n");
        printf("2. Update Score\n");
        printf("3. Display Players\n");
        printf("4. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlayer(&players, &count);
                break;
            case 2:
                updateScore(players, count);
                break;
            case 3:
                sortPlayers(players, count);
                displayPlayers(players, count);
                break;
            case 4:
                saveToFile(players, count, filename);
                printf("Data saved. Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    // Free allocated memory
    free(players);
    return 0;
}

void addPlayer(Player **players, int *count) {
    *players = realloc(*players, (*count + 1) * sizeof(Player));
    if (*players == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Enter Player ID: ");
    scanf("%d", &(*players)[*count].id);
    printf("Enter Player Name: ");
    scanf("%s", (*players)[*count].name);
    printf("Enter Player Score: ");
    scanf("%d", &(*players)[*count].score);

    (*count)++;
    printf("Player added successfully!\n");
}

void updateScore(Player *players, int count) {
    int id, newScore, i, found = 0;

    printf("Enter Player ID to update score: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (players[i].id == id) {
            printf("Enter new score for %s: ", players[i].name);
            scanf("%d", &newScore);
            players[i].score = newScore;
            printf("Score updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Player with ID %d not found.\n", id);
    }
}

void displayPlayers(Player *players, int count) {
    printf("\nPlayer Rankings:\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Score");
    printf("-------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-20s %-10d\n", players[i].id, players[i].name, players[i].score);
    }
}

void saveToFile(Player *players, int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open file for saving.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %d\n", players[i].id, players[i].name, players[i].score);
    }

    fclose(file);
}

void loadFromFile(Player **players, int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("No existing data found. Starting fresh.\n");
        return;
    }

    Player temp;
    while (fscanf(file, "%d %s %d", &temp.id, temp.name, &temp.score) == 3) {
        *players = realloc(*players, (*count + 1) * sizeof(Player));
        if (*players == NULL) {
            printf("Memory allocation failed while loading data.\n");
            exit(1);
        }

        (*players)[*count] = temp;
        (*count)++;
    }

    fclose(file);
}

void sortPlayers(Player *players, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (players[j].score < players[j + 1].score) {
                Player temp = players[j];
                players[j] = players[j + 1];
                players[j + 1] = temp;
            }
        }
    }
}