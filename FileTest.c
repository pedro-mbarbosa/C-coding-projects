#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	FILE* inputFile, * outputFile;
	char buffer[1000];

	outputFile = fopen("mytextfile.txt", "w");
	fprintf(outputFile, "%d\n", 5);
	fprintf(outputFile, "Hellow world!\n");
	fprintf(outputFile, "How are you?\n");
	fprintf(outputFile, "Ok bye!\n");
	fclose(outputFile);

	inputFile = fopen("mytextfile.txt", "r");

	int y;
	fscanf(inputFile, "%d\n", &y);
	y = y + 10;
	while (!feof(inputFile)) {
		if (fgets(buffer, 1000, inputFile) != 0)
			printf("%s", buffer);
	}
	fclose(inputFile);
	return 0;
}