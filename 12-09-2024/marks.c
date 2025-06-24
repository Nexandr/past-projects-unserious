#include <stdio.h>

void main()
{
    while (1>0)
    {
        int marks;
        printf("\n--------------------\n");
        printf("\nEnter marks: ");
        scanf("%d", &marks);
        if (marks<=50) printf("\nYour grade is F\n");
        else if (marks<=60) printf("\nYour grade is E\n");
        else if (marks<=70) printf("\nYour grade is D\n");
        else if (marks<=80) printf("\nYour grade is C\n");
        else if (marks<=90) printf("\nYour grade is B\n");
        else if (marks<=110) printf("\nYour grade is A\n");
    }
}
