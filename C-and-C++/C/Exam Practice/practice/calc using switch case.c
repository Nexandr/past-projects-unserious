#include<stdio.h>
void main()
{
	int n1, n2;
	char res;
	printf("enter any two no \n");
	scanf("%d %d", &n1, &n2);
	printf("Enter + or - or * or /:");
	scanf(" %c", &res);

	switch (res)
	{
		case '+':
			printf("%d\n", n1 + n2);
			break;
		case '-':
			printf("%d\n", n1 - n2);
			break;
		case '*':
			printf("%d\n", n1 * n2);
			break;
		case '/':
			printf("%d\n", n1 / n2);
			break;
		default:
			printf("chal bkl");
			break;
	}
}
