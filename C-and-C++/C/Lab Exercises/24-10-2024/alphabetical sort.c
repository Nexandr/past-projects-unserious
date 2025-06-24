#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int length = strlen(str);
    char temp;

    // Simple bubble sort to sort the characters
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                // Swap characters if they are in the wrong order
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = 0;

    // Sort the string
    sortString(str);

    // Output the sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}

