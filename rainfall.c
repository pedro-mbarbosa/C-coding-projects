#include <stdio.h>

#define RAINFALL_SIZE 5

double getValidRainfall() {
    double value;
    printf("Enter a rainfall amount: ");
    scanf_s("%lf", &value);
    while (value < 0) {
        printf("Invalid input. Enter a non-negative value: ");
        scanf_s("%lf", &value);
    }
    return value;
}

double Total(double inputArray[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += inputArray[i];
    }
    return total;
}
            
double Average(double inputArray[], int size) {
    return Total(inputArray, size) / size;
}

double FindLargest(double inputArray[], int size) {
    double largest = inputArray[0];
    for (int i = 1; i < size; i++) {
        if (inputArray[i] > largest) {
            largest = inputArray[i];
        }
    }
    return largest;
}

double FindSmallest(double inputArray[], int size) {
    double smallest = inputArray[0];
    for (int i = 1; i < size; i++) {
        if (inputArray[i] <  smallest) {
            smallest = inputArray[i];
        }
    }
    return smallest;
}

int main() {
    double rainfallArray[RAINFALL_SIZE];
    for (int i = 0; i < RAINFALL_SIZE; i++) {
        rainfallArray[i] = getValidRainfall();
    }
    printf("Total: %lf\n", Total(rainfallArray, RAINFALL_SIZE));
    printf("Average: %lf\n", Average(rainfallArray, RAINFALL_SIZE));
    printf("Largest: %lf\n", FindLargest(rainfallArray, RAINFALL_SIZE));
	printf("Smallest: %lf\n", FindSmallest(rainfallArray, RAINFALL_SIZE));
    return 0;
}