//10100 = 0*2^0+0*2^0+1*2^3+0*2^4+1*2^5
#include <stdio.h>
#include <math.h>

int main()
{
    int bin, rem, bin1, bin2, count=0, sum=0, inter=0, i;
    printf("Enter your binary:\n");
    scanf("%d", &bin);
    bin1=bin;
    bin2=bin;
    while (bin1!=0)
    {
        ++count;
        bin1=bin1/10;
    }
    for (i=0; i<count; i++)
    {
        rem=bin2%10;
        bin2/=10;
        inter=rem*pow(2,i);
        sum=sum+inter;
    }
    printf("The octal number for the input binary is: %o\n", sum);
    printf("The hexadecimal number for the input binary is: %x\n", sum);
}
