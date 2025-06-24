#include <stdio.h>

int main() {
    char line[100];

    printf("Enter lines of text (enter '*' as the first character to stop):\n");

    while (1) {
        // Read a line of text
        fgets(line, sizeof(line), stdin);

        // Check if the first character is '*'
        if (line[0] == '*') {
            break;
        }

        // Convert the line to uppercase
        for (int i = 0; line[i] != '\0'; i++) {
            // Check if the character is a lowercase letter
            if (line[i] >= 'a' && line[i] <= 'z') {
                // Convert it to uppercase by subtracting 32 (ASCII difference between lowercase and uppercase)
                line[i] = line[i] - 32;
            }
        }

        // Print the converted line
        printf("%s", line);
    }

    return 0;
}

