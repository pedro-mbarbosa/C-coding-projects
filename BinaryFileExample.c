#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));

    FILE* fp = fopen("binaryExample.bin", "wb");
    if (!fp) { perror("open write"); return 1; }

    for (int i = 0; i < 1000; i++) {
        int value = rand() % 100 + 1;
        fwrite(&value, sizeof(int), 1, fp);
    }
    fclose(fp);

    fp = fopen("binaryExample.bin", "rb");
    if (!fp) { perror("open read"); return 1; }

    int value;
    while (fread(&value, sizeof(int), 1, fp) == 1) {
        printf("%d\n", value);
    }

    rewind(fp);

    int myArray[1000];
    size_t nread = fread(myArray, sizeof(int), 1000, fp);


    fclose(fp);

}
