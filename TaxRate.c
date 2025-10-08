#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	double taxRate;
	printf("Enter the tax rate: ");
	scanf("%lf", &taxRate);
	printf("The tax rate is %.2lf\n", taxRate);
}