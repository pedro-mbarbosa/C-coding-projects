#include <stdio.h>

void main() {
	/*int month = 1;
	printf("%i		%03i", month, month);*/

	int a = 0;
	printf("Enter: ");
	scanf_s("%d", &a);
	if (a < 10) {
		printf("Less than 10!");
	}
	else if (a == 10) {
		printf("The value is 10!");
	}
	else {
		printf("More than 10!");
	}
}