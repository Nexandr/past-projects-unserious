#include <stdio.h>

int main()
{
    int limit, count, num;
    printf("Enter number:\n");
    scanf("%d", &limit);
    for (count=1; count<=limit; count++)
    {
        for (num=1; num<=count; num++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
