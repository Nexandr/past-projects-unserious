#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n1, n2, n, i;

    // Input sizes of the two arrays
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    n = n1 + n2;
    int arr[n];

    // Input elements of the first array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    // Input elements of the second array
    printf("Enter the elements of the second array:\n");
    for (i = n1; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the merged array
    bubbleSort(arr, n);

    // Output the sorted merged array
    printf("The merged array in ascending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
