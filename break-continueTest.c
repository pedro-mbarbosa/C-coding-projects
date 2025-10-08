#include <stdio.h>

void main() {

	int i = 0;
	for (i = 0; i < 100; i++) {

		if (i == 77) {
			break;
		}

		else if (i % 2) {
			continue;
		}

		printf("%d\n", i);
	}
}