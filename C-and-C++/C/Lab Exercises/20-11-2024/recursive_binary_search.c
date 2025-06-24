#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}

