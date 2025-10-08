#include <stdio.h>

int main() {
    int num;
    printf("Enter a value: ");
    scanf_s("%d", &num);

    printf("Prime numbers from 2 to %d are:\n", num);

    for (int i = 2; i <= num; i++) {

        int isPrime = 1; // Assume i is prime
		for (int j = 2; j <= i / 2; j++) { // i/2 bc cant divide by a number larger than itself
			if (i % j == 0) { //if num is divisible by j than it is not prime
                isPrime = 0; // i is not prime
                break; // breaks inner loop, since it just set isPrime to 0, the next if doesnt run and starts the outter loop
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }

    
}