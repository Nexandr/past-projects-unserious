#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    printf("\nHexadecimal equivalent of %d is %x.\n", num, num);
    return 0;
}
