#include <stdio.h>

void main() {

	double allGrades[10][5];
	allGrades[6][3] = 95;

	double rainfallArr[5];

	for (int i = 0; i < 5; i++) {
		printf("Enter a value: ");
		scanf_s("%lf", &rainfallArr[i]);

		/*double value;
		scanf("%lf", &value);
		rainfallArr[i] = value;*/
	}

	double sum = 0.0;
	for (int i = 0; i < 5; i++) {
		sum += rainfallArr[i];
	}
	double average = sum / 5;
	printf("Total: %.2lf Average : %.2lf\n", sum, average);
}

