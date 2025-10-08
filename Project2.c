#include <stdio.h>

void main() {

	double item1 = 3.0, item2 = 1.25;
	double calculation = item1 + item2;
	printf("Total is $ %.3lf \n", calculation);
	
	double budget;
	printf("Enter your budget ");
	scanf_s("%lf", &budget);

	double change = (budget - calculation);
	printf("Your change is %lf", change);

}