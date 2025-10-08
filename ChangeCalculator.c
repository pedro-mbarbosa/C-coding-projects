#include <stdio.h>

void MakeChange(int n, int* pQuarters, int* pDimes, int* pNickels, int* pPennies) {
	*pQuarters = n / 25;
	n %= 25;
	*pDimes = n / 10;
	n %= 10;
	*pNickels = n / 5;
	n %= 5;
	*pPennies = n;
}

int main() {
	int amount, quarters, dimes, nickels, pennies;
	printf("Enter the amount in cents: ");
	scanf_s("%d", &amount);
	MakeChange(amount, &quarters, &dimes, &nickels, &pennies);
	printf("Quarters: %d\n", quarters);
	printf("Dimes: %d\n", dimes);
	printf("Nickels: %d\n", nickels);
	printf("Pennies: %d\n", pennies);
	return 0;
}