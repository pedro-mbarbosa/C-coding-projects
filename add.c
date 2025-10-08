#include <stdio.h>
//#include "header.h"

int Add(int x, int y, int w, int z) {
	return x + y + w + z;
}

void main() {
	int a = 5;
	int b = 10;
	int c = Add(a, b, 10, 15);
	printf("%d\n", c);
}

