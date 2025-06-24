#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int array[], int length) {
    int i, j, rep;

    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap elements
                rep = array[j];
                array[j] = array[j + 1];
                array[j + 1] = rep;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array is:\n");
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to perform binary search
int binarySearch(int array[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid; // Target found
        }

        if (array[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int len, k, target;

    // Get the number of elements in the array
    printf("Input number of terms in the array:\n");
    scanf("%d", &len);

    int arr[len]; // Declare array of size 'len'

    // Input each number
    printf("Input each number one by one:\n");
    for (k = 0; k < len; k++) {
        scanf("%d", &arr[k]);
    }

    // Sort the array using bubble sort
    bubbleSort(arr, len);

    // Get the target element for binary search
    printf("Input the number you want to search for:\n");
    scanf("%d", &target);

    // Perform binary search
    int result = binarySearch(arr, len, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
