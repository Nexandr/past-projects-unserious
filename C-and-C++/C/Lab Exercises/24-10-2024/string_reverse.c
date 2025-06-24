#include <stdio.h>
int main(){
    //Handling input
    char inp[100];
    printf("Enter a string.\n");
    fgets(inp, sizeof(inp), stdin);

    //Removing the newline character
    for (int i=0; inp[i]!='\0'; i++){
        if (inp[i]=='\n'){
            inp[i]='\0';
        }
    }

    //Getting Length
    int length=0;
    for (int i=0; inp[i] != '\0'; i++){
        length++;
    }

    //Declaring unto another string
    char str[length];
    for (int i=0; i<=length; i++){
        str[i]=inp[i];
    }
    //Reversing the String
    char rev[length];
    for (int i=0; i<=length; i++){
        rev[i]=str[length-i];
    }

    //Printing the reverse string
    for (int i=0; i<=length; i++){
        printf("%c", rev[i]);
    }
}
