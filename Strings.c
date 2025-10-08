#include <stdio.h>

void main() {

	char testString[] = "Hello world!\n"; //if no value is assigned, it will the exact amount of characters u assign it 
	printf("%s", testString);                                   // but later u HAVE to stay <= that amount of characters
															// so the amount of characters in the input cant go over the assigned one
	printf("Now enter your name: ");
	gets(testString); // overried previous testString, instead of Hellow world!, it will hold the name entered by user
	printf("Hello %s\n", testString);



}