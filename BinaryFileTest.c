#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int month; int day; int year;
} Date;

void main() {

	FILE* fp; //fp = file pointer
	double d = 27.5;
	long int myArray[5] = { 10,20,30,40,50 };
	Date birthday = { 11, 16, 1980 };

	fp = fopen("myfile.bin", "wb");
	fwrite(&d, sizeof(double), 1, fp);
	fwrite(&myArray[0], sizeof(long int), 5, fp);
	fwrite(&birthday, sizeof(Date), 1, fp);
	fclose(fp);

	double x;
	long int y[5] = {0};
	Date z;
	fp = fopen("myfile.bin", "rb");	
	fread(&x, sizeof(double), 1, fp);
	fread(&y, sizeof(long int), 5, fp);
	fread(&z, sizeof(Date), 1, fp);
	fclose(fp);
}