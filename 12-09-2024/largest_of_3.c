#include <stdio.h>

int main()
{
    int a, b, c, big;
    printf("Enter numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c)
    {
        printf("all are equal");
    }
    else
    {
        if (a>=b && a>c)
        {
            big = a;
        }
        if (b>a && b>=c)
        {
            big = b;
        }
        if (c>=a && c>b)
        {
            big = c;
        }
        printf("%d is largest", big);
    }
    return 0;
}
