#include <string.h>
#include <stdio.h>
#define ARRAY_SIZE 100

typedef struct {
    double array[ARRAY_SIZE];
    int effectiveSize;
} EffectiveArray;

void GetValue(EffectiveArray* pArray) {
    double value;
    int index = pArray->effectiveSize;
    if (index >= ARRAY_SIZE) {
        printf("Array is full.\n");
        return;
    }
    printf("Enter a number: \n");
    if (scanf_s("%lf", &value) != 1) {
        printf("Invalid input.\n");
        return;
    }
    pArray->array[index] = value;
    pArray->effectiveSize++;
}

void PrintArray(const EffectiveArray* pArray) {
    printf("The array values are:\n");
    for (int i = 0; i < pArray->effectiveSize; i++) {
        printf("%lf\n", pArray->array[i]);
    }
}

int main(void) {
    EffectiveArray test;
    test.effectiveSize = 0;

    GetValue(&test);
    GetValue(&test);
    GetValue(&test);
    PrintArray(&test);
    GetValue(&test);
    GetValue(&test);
    PrintArray(&test);
}