#include <stdio.h>

void main() {

	char myString[30];
	printf("Enter your name: ");
	fgets(myString, 30, stdin); //stdin = keyboard

	for (int i = 0; myString[i]!='\0'; i++) {
		if (myString[i] >= 'a' && myString[i] <= 'z') {
			myString[i] -= 32;
		}
	}
	printf("HELLO %s \n", myString); 
}