#include <stdio.h>
//WILL NOT BE ON THE TEST

void main() {
	int y = 5;
	int x = (y == 5) ? 0 : 1;

	//Equivalent if / else:
	if (y == 5) {
		x = 0;
	}
	else x = 1;

}