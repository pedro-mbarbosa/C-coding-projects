#include <stdio.h>
#define COUNT 5

int main() {
    int arr[COUNT] = { 7, 1, 5, 10, 8 };
    int i, j, min, temp;

    // Selection sort
    for (i = 0; i < COUNT - 1; i++) {
        min = i;
        for (j = i + 1; j < COUNT; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // Print sorted array
    for (i = 0; i < COUNT; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

