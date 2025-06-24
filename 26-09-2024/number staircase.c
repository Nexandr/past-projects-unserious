#include <stdio.h>
int main()
{
    int limit, count, rows, x=1;
    printf("Input number of rows:\n");
    scanf("%d",&rows);
    for (limit=1; limit<=rows; limit++)
    {
        for (count=1; count<=limit; count++)
        {
            printf("%d ", x);
        }
        x++;
        printf("\n");
    }
    return 0;
}
