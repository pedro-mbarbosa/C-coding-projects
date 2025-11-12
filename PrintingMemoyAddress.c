#include <stdio.h>

void main() {
    double data[5] = { 1.5, 2.6, 7.9, 23.9, 9.1 };
    for (int i = 0; i < 5; i++) {
        printf("%d 0x%X: %lf\n", i, &data[i], data[i]);
    }
}
