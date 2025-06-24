#include <stdio.h>
int main()
{
    int rep, len, i, j, k;
    printf("Input number of terms in the array:\n");
    scanf("%d", &len);
    int arr[len];
    printf("\nInput each number one by one.\n");
    for (k=0; k<len; k++)
    {
        scanf("%d", &arr[k]);
    }
    for (i=0; i<len; i++)
    {
        for (j=0; j<len-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                rep=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=rep;
            }
        }
    }
    printf("Sorted array is:\n");
    for (k=0; k<len; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;

}
