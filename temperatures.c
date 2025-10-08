#include <stdio.h>

void CalcTempoerature(double fahrenheit , double* pcelsius, double* pkelvin) {
	*pcelsius = (fahrenheit - 32) * 5.0 / 9.0;
	*pkelvin = *pcelsius + 273.15;
}

/*void main() {
	double fahrenheit;
	double celsius, kelvin;
	printf("Enter temperature in farenheit: ");
	scanf_s("%lf", &fahrenheit);
	CalcTempoerature(fahrenheit, &celsius, &kelvin);
	printf("%lf In Fahrenheit is %lf in Celsius and %lf in Kelvin\n", fahrenheit, celsius, kelvin);

}*/


void main() {
	for (int i = 0; i <= 300; i += 10) {

		int fahrenheit = i;
		double celsius, kelvin;
		CalcTempoerature(fahrenheit, &celsius, &kelvin);
		printf("%d\t In Fahrenheit is \t%.2lf in Celsius \tand \t%.2lf in Kelvin\n", fahrenheit, celsius, kelvin);

	}
}