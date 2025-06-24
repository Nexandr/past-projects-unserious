//Number of rows = rows
//Number of spaces in each row= 2*row-1
//For each row, number of spaces = total rows - row
#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int limit = (rows/2) + 1;  // Calculate the middle point

        // Upper part of the pattern
        for (int count = 0; count < limit; count++)
        {
            for (int tick = 0; tick < (limit-count)-1; tick++)
            {
                printf(" ");
            }
            for (int tick = 0; tick < 2 * count + 1; tick++) {
                printf("*");
            }
            printf("\n");
        }

        // Lower part of the pattern
        for (int count = limit - 2; count >= 0; count--)
            {
                for (int tick = 0; tick < limit - count - 1; tick++)
                {
                    printf(" ");
                }
                for (int tick = 0; tick < 2 * count + 1; tick++)
                {
                    printf("*");
                }
            printf("\n");
        }
    return 0;
}
