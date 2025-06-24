#include <stdio.h>
int main()
{
    int num, fact_count, div, rem;
    printf("Enter a number:");
    scanf("%d", &num);
    for (div=1; div<=num; div++)
    {
        rem=num%div;
        if (rem==0)
        {
            fact_count++;
        }
    }
    if (fact_count==2)
    {
        printf("\n%d is a prime number.\nThere are only %d factors of %d.\n", num, fact_count, num);
    }
    else
    {
        printf("\n%d is not a prime number.\nThere are %d factors of %d.\n", num, fact_count, num);
    }
    return 0;
}
