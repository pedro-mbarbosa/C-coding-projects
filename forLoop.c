#include <stdio.h>

void main(){

	int i = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {

		printf("%d\n", i);
		count++;
		
	}
	printf("We exited the loop at %d\n", count -1);
}