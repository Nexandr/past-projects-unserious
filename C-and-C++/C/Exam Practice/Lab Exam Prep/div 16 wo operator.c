#include <stdio.h>
int main(){
    int inp;
    printf("Enter number: ");
    scanf("%d", &inp);
    int div;
    div = inp >> 4;
    printf("\n%d", div);
    return 0;
}
