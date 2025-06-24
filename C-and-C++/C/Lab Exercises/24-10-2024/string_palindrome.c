#include <stdio.h>

int main() {
    // Handling input
    char inp[100];
    printf("Enter a string:\n");
    fgets(inp, sizeof(inp), stdin);

    // Removing the newline character
    for (int i = 0; inp[i] != '\0'; i++) {
        if (inp[i] == '\n') {
            inp[i] = '\0';
        }
    }

    // Getting Length
    int length = 0;
    while (inp[length] != '\0') {
        length++;
    }

    // Reversing the String
    char rev[length + 1];
    for (int i = 0; i < length; i++) {
        rev[i] = inp[length - i - 1];
    }
    rev[length] = '\0'; // Add null terminator

    // Printing the reversed string
    printf("Reversed string: %s\n", rev);

    // Checking for Palindromism
    int isPalindrome = 1;
    for (int i = 0; i < length; i++) {
        if (rev[i] != inp[i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("Entered string is a palindrome.\n");
    } else {
        printf("Entered string is not a palindrome.\n");
    }

    return 0;
}

