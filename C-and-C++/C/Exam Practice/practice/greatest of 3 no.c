#include<stdio.h>
void main()
{
	int n1, n2, n3, big;
	printf("enter three nos\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1==n2 && n2==n3)
    {
        printf("All are equal./n");
    }
	if (n1 >= n2 && n1 > n3)
    {
        big = n1;
    }
	if (n2 >= n1 && n2 > n3)
    {
        big = n2;
    }
	if (n3 > n1 && n3 >= n2)
	{
	    big = n3;
	}
	else
        printf("no\n");

    printf("%d is biggest", big);
}
