#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int myArray[5] = { 1, 2, 3, 4, 5 };
    int myOtherArray[10] = { 0 };

    memcpy(&myOtherArray[0], &myArray[0], 5 * sizeof(int));  //copy the entire array
    memcpy(&myOtherArray[5], &myArray[2], 3 * sizeof(int));  //copy all but first 2 integers
    memset(&myOtherArray[0], 0, 5 * sizeof(int));            //sets everything to zero

    float x = 3.14;
    char bytes[4];
    memcpy(&bytes[0], &x, sizeof(float));
}