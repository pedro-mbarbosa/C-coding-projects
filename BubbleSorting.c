#include <stdio.h>
#define COUNT 5

int main() {
    int a[COUNT] = { 5, 3, 4, 1, 2 };
    int i, j, temp;

    // Bubble sort algorithm
    for (i = 0; i < COUNT - 1; i++) {
        for (j = 0; j < COUNT - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    for (i = 0; i < COUNT; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}