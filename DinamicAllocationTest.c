#include <stdio.h>
#include <stdlib.h>

void main() {

	int arraySize, i;
	int* myArray = NULL;

	printf("Input array size: ");
	scanf_s("%d", &arraySize);
	myArray = (int*)calloc(arraySize, sizeof(int)); // OR myArray = (int*)malloc(arraSize * sizeof(int));

	if (myArray == NULL) {
		printf("Memory allocation failed!\n");
		exit(-1); //stop the program
	}

	for (int i = 0; i < arraySize; i++) {
		myArray[i] = i * 10;
		printf("%d\n", myArray[i]);
	}

	myArray = realloc(myArray, arraySize * 2); // Resize the allocated memory
	free(myArray);
}