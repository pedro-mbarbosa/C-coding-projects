#include <stdio.h>


/*int Largest(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	}
	else if (b >= a && b >= c) {
		return b;
	}
	else {
		return c;
	}
} */

int Largest(int a, int b, int c) {
        int max = a;
        if (b > max) {
            max = b;
        }
        if (c > max) {
            max = c;
        }
        return max;
}

int main() {
        int a, b, c;
        printf("Enter three numbers: ");
        scanf_s("%d %d %d", &a, &b, &c);
        printf("The largest number is: %d\n", Largest(a, b, c));
        return 0;
}


