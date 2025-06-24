#include <stdio.h>

int main()
{
    int num, lim, fact=1;
    printf("Enter number:\n");
    scanf("%d", &num);
    if (num>0)
    {
        for (lim=1; lim<=num; lim++) //Takes a number lim to num
        {
            //lim = 1, fact = 1, lim = 2, fact = 1*lim, lim = 3, fact = fact
            fact=fact*lim;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }
    else if (num==0)
    {
        printf("Factorial of 0 = 1\n");
    }
    else
    {
        printf("Factorial of negative number does not exist.\n");
    }
    return 0;
}
