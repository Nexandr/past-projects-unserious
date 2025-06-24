#include <stdio.h>

int main()
{
    int num, mod;
    printf("Enter number:\n");
    scanf("%d", &num);
    //Dividing a number into consitituents.
    while (num != 0)
    {
        mod = num%10;
        printf("%d", mod);
        num = num/10;
    }
    return 0;
}
