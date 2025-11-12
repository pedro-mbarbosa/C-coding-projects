#include <stdio.h>
#include <string.h>

void main() {
	char* str = "Hello class!";
	int addr = strstr(str, "class");

	if (addr != 0) {
		printf("substring found at 0x%X", addr);
	}
	else {
		printf("substring not found");
	}

}

