#include <stdio.h>
#include <string.h>
void main() {
    char point[6]="north";
    printf("%c", point[6]);
    if(point[6]=='\0'){
        printf("yay");
    }
}
