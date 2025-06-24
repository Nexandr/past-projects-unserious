//Calculate remainder through division by 2 until number is 0.
#include <stdio.h>
int main()
{
    int num, binary[32], rem, len=0, display;
    printf("Enter a number:\n");
    scanf("%d", &num);
    //Converting to Binary
    while (num>0)
    {
        binary[len++]=num%2;
        num=num/2;
    }
    //Displaying from Array
    printf("Binary Equivalent: \n");
    for (display=len-1; display>=0; --display)
    {
        printf("%d", binary[display]);
    }
    printf("\n");
    return 0;
}
