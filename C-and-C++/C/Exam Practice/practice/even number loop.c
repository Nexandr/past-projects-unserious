/*Write a C program that does the following: It accepts a sequence of integers from
the user, continuing as long as it enters an even integer. Once the user enters an
odd integer, the program stops accepting inputs. Then, compute the total number
of even integers entered, their sum, and print those results.*/

#include <stdio.h>
int main()
{
    int input, sum=0, mod, count=0;
    while(1)
    {
        printf("Input an even or odd number:\n");
        scanf("%d", &input);
        mod=input%2;
        if(mod==0)
            {
                printf("You've entered an even number! Loop continues.\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                sum=sum+input;
                count++;
            }//if ends
        else if (mod==1)
            {
                printf("You've entered an odd number! Loop breaks.\n\n\n");
                sum=sum+input;
                ++count;
                printf("Sum of entered numbers is: %d\n", sum);
                printf("Number of integers entered: %d\n", count);
                break;
            }//else ends
    }//while loop ends
    return 0;
}
