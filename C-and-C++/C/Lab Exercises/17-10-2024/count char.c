#include <stdio.h>
int main() {
    //Entering a string yay
    char string[100], letter;
    int count=0;
    printf("Enter a string:\n");
    fgets(string, sizeof(string), stdin); //scanf("%s", &string);
    //Ask for which letter to look for...
    printf("\nWhich letter to search for:\n");
    scanf("%c", &letter);
    //For each value of string==letter, count increases by 1
    for (int i=0; string[i] != '\0'; i++)
    {
        if (string[i]==letter) {
            count++;
        }
    }
    printf("\n\nIt appears %d times.\n----------------------", count);
    return 0;
}
