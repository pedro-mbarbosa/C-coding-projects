#include <stdio.h>

int x = 5;
int y = 10;
int z = 15;

int main() {
    int* pointer;
    pointer = &x;
    printf("X: %d Y: %d Z: %d \t\tpointer1; 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
    *pointer = 100;

	pointer = &y;
    printf("X: %d Y: %d Z: %d \t\tpointer2; 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
	*pointer = 200;

    pointer = &z;
	printf("X: %d Y: %d Z: %d \t\tpointer3; 0x%x *pointer: %d\n", x, y, z, pointer, *pointer);
    *pointer = 300;
    printf("X: %d Y: %d Z: %d \n", x, y, z);
	return 0;
}