#include <stdio.h>
int main()
{
    int a, b, c, big;
    printf("Enter 3 numbers separated by commas:\n");
    scanf("%d, %d, %d", &a, &b, &c);
    big = ((a>b)&&(a>c)?a:(b>c)?b:c);
    printf("Biggest number is: %d\n", big);
    return 0;
}
