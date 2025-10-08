#include <stdio.h>

void main() {

    int myBigArray[50] = { 6,39,37,70,47,53,84,42,6,95,56,19,90,7,70,99,70,
        44,23,52,42,82,40,17,33,12,62,55,24,74,60,84,47,87,59,90,91,10,
        62,91,27,63,62,55,79,56,91,38,98,60 };

    int value = 0;
    printf("What value do you want to search for? ");
    scanf_s("%d", &value);

    int i = myBigArray[0];
    int count = 0;

    for (int i = 0; i < 50; i++) {
        if (myBigArray[i] == value) {
            printf("Found %d at index %d\n", value, i);
            count++;
        }
    }
    if (count == 0) {
        printf("Value %d not found in array\n", value);
	}
}