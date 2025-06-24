#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, avg;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the numbers
    float numbers[n];

    // Loop to input the numbers into the array
    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];  // Sum the numbers as they are entered
    }

    // Calculate the average
    avg = sum / n;

    // Output the result
    printf("The average is: %.2f\n", avg);

    return 0;
}

