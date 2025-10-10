#include <stdio.h>


void findAverageAndMedian(double arr[], int size, double* average, double* median) {
    double sum = 0.0;
    int i, j;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    *average = sum / size;

    
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (size % 2 == 0)
        *median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    else
        *median = arr[size / 2];
}


int main() {
    double values[15] = { 7.7, 1001.2, 654.7, 12.8, 0.91, 15.102, 812.5, 121.6, 382.1,
                          40.1, 452.0, 128.2, 544.6, 23.2, 750.1 };

    double avg = 0.0, med = 0.0;

    
    findAverageAndMedian(values, 15, &avg, &med);

    
    printf("Average: %.3f\n", avg);
    printf("Median: %.3f\n", med);
}


