#include <stdio.h>

typedef struct {
	int day;
	int month;
	int year;
} Date;

void PrintDate(Date input) {

	printf("%i/%i/%i\n", input.month, input.day, input.year);
}

void PrintDateEU(Date input) {

	printf("%i/%i/%i\n", input.day, input.month, input.year);
}

int main() {
    Date birthday = { 8, 17, 2006 };
	PrintDate(birthday);
	PrintDateEU(birthday);
}
