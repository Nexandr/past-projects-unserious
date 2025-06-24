#include <stdio.h>
void special_no(int num)
{
    int num1, num2, rem=0, sum=0, pwr=0;
    num1=num;
    num2=num;
    while (num1!=0)
    {
        ++pwr;
        num1=num1/10;
    }
    while (num2!=0)
    {
        rem=num2%10;
        sum=sum+pow(rem, pwr);
        num2=num2/10;
    }
    if (sum==num)
    {
        printf("%d is a special number.", num);
    }
    else if (sum!=num)
    {
        printf("%d is not a special number.", num);
    }
    else
    {
        printf("Invalid operation.");
    }
}

int main()
{
    int input, output;
    printf("Enter a number:\n");
    scanf("%d", &input);
    special_no(input);
}
