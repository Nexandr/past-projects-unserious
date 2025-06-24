#include <stdio.h>

int main()
{
    int num, stg, sum=0;
    printf("Enter number:\n");
    scanf("%d", &num);
    //Dividing the numbers
    while (num != 0)
    {
        stg = num%10; //Finds remainder
        sum = sum + stg; //Adds remainder to sum
        num = num/10; //Removes number from remainder
    }
    printf("%d", sum);
    return 0;
}
