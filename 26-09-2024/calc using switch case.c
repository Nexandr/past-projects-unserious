#include<stdio.h>
void main()
{
	float n1, n2;
	int modn1, modn2, rem;
	char res;
	printf("Enter any two numbers: \n");
	scanf("%f %f", &n1, &n2);
	printf("\nEnter '+' to 'Add'; or '-' to 'Subtract'; or '*' to 'Multiply'; or '/' to 'Divide' ;or '#' for 'Remainder':");
	scanf(" %c", &res);
    modn1=(int)n1;
	modn2=(int)n2;
	switch (res)
	{
		case '+':
			printf("%.2f\n", n1 + n2);
			break;
		case '-':
			printf("%.2f\n", n1 - n2);
			break;
		case '*':
            printf("%.2f\n", n1 * n2);
			break;
		case '/':
			printf("%.2f\n", n1 / n2);
			if (n2==0)
			{
                printf("Division by zero error.");
			}
			break;
        case '#':
            rem = modn1 % modn2;
            printf("%.d\n", rem);
            break;
		default:
			printf("Please enter either '+', '-', '/' or '*'.\n");
			break;
	}
}
