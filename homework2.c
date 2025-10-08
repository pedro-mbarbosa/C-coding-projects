#include <stdio.h>

void main() {

	int made;
	double commission = 0.0;
	printf("How much money have you made: ");
	scanf_s("%d", &made);

	if (made <= 5000) {
		commission = made * 0.05;
	}
	else if (made > 5000 && made < 10000) {
		commission = made * 0.075;
	}
	else commission = made * 0.09;

	printf("Your commission is: %.2lf", commission);
}