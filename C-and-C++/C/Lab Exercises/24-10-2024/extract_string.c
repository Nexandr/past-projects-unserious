#include <stdio.h>
int main(){
    //Working the string inputs.
    char inp[100];
    printf("Enter a string.\n");
    fgets(inp, sizeof(inp), stdin);
    int length=0;
    for (int i=0; inp[i] != '\0'; i++){
        length++;
    }
    //Terminating the Nulls
    char str[length];
    for (int i=0; inp[i]!='\0'; i++){
        str[i]=inp[i];
    }
    //Finding the limits.
    printf("Which character do you want to start from.\n");
    int start, stop, diff;
    scanf("%d", &start);
    printf("How many characters do you want to print?\n");
    scanf("%d", &diff);
    stop=start+diff-1;
    if (start<length && stop<=length){
        for (int i=start-1; i<=stop; i++){
            printf("%c", str[i]);
        }
    }
    else if (start>length || stop>length){
        printf("Entered value is outside string bounds.\n");
    }
    return 0;
}
