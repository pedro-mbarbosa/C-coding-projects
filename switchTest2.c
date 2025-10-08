#include <stdio.h>

int main() {

	int choice;
	printf("Enter your choice:");
	scanf_s("%i", &choice);

	switch (choice) {
	case 0:
		printf("You entered 0 zero.\n");
		break;
	case 1:
		printf("You entered 1 one.\n");
		break;
	default:
		printf("You did not enter 0 zero or 1 one.\n");
		break;
	}
}
