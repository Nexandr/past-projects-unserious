#include <stdio.h>
#include <string.h>

// Define the structure cricket
struct cricket {
    char name[50];
    char team[50];
    float avg;
};

int main() {
    // Declare an array of 20 players
    struct cricket player[20];
    int n = 20;

    // Read the information for all 5 players
    printf("Enter information for 3 players:\n");
    for (int i = 0; i < n; i++) {
        printf("\nPlayer %d:\n", i + 1);
        printf("Enter player name: ");
        scanf(" %[^\n]", player[i].name);
        printf("Enter team name: ");
        scanf(" %[^\n]", player[i].team);
        printf("Enter batting average: ");
        scanf("%f", &player[i].avg);
    }

    // Printing the team-wise list
    printf("\nTeam-wise list of players with batting averages:\n");

    // Looping through unique team names and print players of each team
    for (int i = 0; i < n; i++) {
        int already_printed = 0;

        // Checking if the team has already been processed
        for (int j = 0; j < i; j++) {
            if (strcmp(player[i].team, player[j].team) == 0) {
                already_printed = 1;
                break;
            }
        }

        if (!already_printed) {
            // Print the team name
            printf("\nTeam: %s\n", player[i].team);

            // Print all players in this team
            for (int k = 0; k < n; k++) {
                if (strcmp(player[i].team, player[k].team) == 0) {
                    printf("Player: %s, avg: %.2f\n", player[k].name, player[k].avg);
                }
            }
        }
    }

    return 0;
}

