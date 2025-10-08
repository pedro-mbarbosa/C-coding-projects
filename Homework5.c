#include <stdio.h>

void decimalToBinary(unsigned int n) {
    int exponent = 128; 

    
    while (exponent >= 1) {
        if (n >= exponent) {
            printf("1");
            n = n - exponent;
        }
        else {
            printf("0");
        }
        exponent = exponent / 2;
    }
    printf("\n"); 
}

int main() {
    unsigned int num;

    
    printf("Enter an unsigned integer (0-255): ");
    scanf_s("%u", &num);

    
    if (num > 255) {
        printf("Error: Only 8-bit values (0–255) are supported.\n");
        return 1;
    }

    
    decimalToBinary(num);

    return 0;
}
