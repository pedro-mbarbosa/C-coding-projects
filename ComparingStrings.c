#include <stdio.h>
#include <string.h>

void main()
{
    char* str = "Hello class!";

    if (strcmp(str, "Hello class!") == 0)
    {
        printf("Test passed: String matches expected value.\n");
    }
    else
    {
        printf("Test failed: String does not match expected value.\n");
    }

    printf("String length: %zu\n", strlen(str));
}