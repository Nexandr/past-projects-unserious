#include <stdio.h>

int main()
{
    int a=0, b=1, sum, lim, count;
    printf("Till which number do you want the series to?:\n");
    scanf("%d", &lim);
    printf("-----------------------------\n");
    if (lim==1)
    {
        printf("%d\n", a);
        printf("The 1 th number of the FIBONACCI series is: 0");
        printf("-----------------------------\n");
    }
    else if (lim<=0)
    {
        printf("Enter a number above 0.\n");
        printf("-----------------------------\n");
    }
    else
    {
        printf("%d\n", a);
        printf("%d\n", b);
        for (count=0; count<lim-3; count++)
        {
            if (count!=lim-4)
            {
                sum=a+b; //Adds a and b
                printf("%d\n", sum);//Prints the sum
                a=b; //Declares a as b
                b=b+sum; //Adds the sum to b
                printf("%d\n", b);
            }
            else
            {
                    sum=a+b; //Adds a and b
                printf("%d\n", sum);//Prints the sum
                a=b; //Declares a as b
                b=b+sum; //Adds the sum to b
            }
        }
        printf("The %d th number of the FIBONACCI series is: %d\n", lim, sum);
        printf("-----------------------------\n");
    }
    return 0;
}
