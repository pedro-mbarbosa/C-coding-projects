#include <stdio.h>

void main() {

	int grades[10] = { 0, 0, 87, 68, 98, 88, 63, 72, 90, 79 };
	int grades2[10] = { 0 };
	int grades3[]  = {0, 0, 87, 68, 98, 88, 63, 72, 90, 79};
	

	int i;
	for (int i = 0; i < 10; i++) {

		printf("[%d]: %d\n", i, grades[i]);
	}
}