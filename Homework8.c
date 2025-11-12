#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

void PrintList(string pArray[], int size)
{
    printf("These are the names in the list:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", pArray[i]);
    }
}

int main(void)
{
    string* pStringArray = NULL;
    int numberOfNames = 0;
    char buffer[1000];

    printf("How many names will you enter? ");
    if (scanf("%d", &numberOfNames) != 1 || numberOfNames <= 0) {
        printf("Invalid count.\n");
        return 1;
    }

    pStringArray = (string*)calloc((size_t)numberOfNames, sizeof(string));
    if (pStringArray == NULL) {
        printf("Allocation failed for pStringArray.\n");
        return 1;
    }

    for (int i = 0; i < numberOfNames; i++)
    {
        printf("Enter a name: ");
        if (scanf("%999s", buffer) != 1) {
            printf("Failed to read name.\n");
            for (int j = 0; j < i; j++) {
                free(pStringArray[j]);
            }
            free(pStringArray);
            return 1;
        }

        size_t needed = strlen(buffer) + 1;
        pStringArray[i] = (char*)malloc(needed);
        if (pStringArray[i] == NULL) {
            printf("Allocation failed for name %d.\n", i + 1);
            for (int j = 0; j < i; j++) {
                free(pStringArray[j]);
            }
            free(pStringArray);
            return 1;
        }

        strcpy(pStringArray[i], buffer);
    }

    PrintList(pStringArray, numberOfNames);

    for (int i = 0; i < numberOfNames; i++)
    {
        free(pStringArray[i]);
    }

    free(pStringArray);
    return 0;
}
