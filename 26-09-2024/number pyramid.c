#include <stdio.h>

int main() {
    int rows, current_number = 1;

    // Input: Number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (int row = 1; row <= rows; row++) {
        // Print spaces for left alignment
        for (int space = 1; space <= rows - row; space++) {
            printf(" ");
        }

        // Print the numbers in each row
        for (int col = 1; col <= row; col++) {
            printf("%d ", current_number);
            current_number++;  // Increment the number for the next print
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
