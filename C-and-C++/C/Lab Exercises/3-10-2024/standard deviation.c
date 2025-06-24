#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, mean, sumOfSquares = 0.0, stddev;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the numbers
    float numbers[n];

    // Input the numbers into the array
    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];  // Sum of the numbers
    }

    // Calculate the mean (average)
    mean = sum / n;

    // Calculate the sum of the squared differences from the mean
    for (i = 0; i < n; ++i) {
        sumOfSquares += pow(numbers[i] - mean, 2);
    }

    // Calculate the standard deviation
    stddev = sqrt(sumOfSquares / n);

    // Output the result
    printf("The standard deviation is: %.2f\n", stddev);

    return 0;
}

