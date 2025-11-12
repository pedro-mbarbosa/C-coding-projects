#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void testWriteToFile(const char* path)
{
    FILE* fp = fopen(path, "w");
    if (!fp) {
        perror("fopen for write");
        return;
    }
    fputs("Open a file for text writing. Put all of the text in the file that appears on this slide. Close the file.\n", fp);
    fputs("Open the file for reading. Read the file one character at a time, counting how many of each vowel occur in the text.\n", fp);
    fputs("Close the file, and then open it for reading, this time counting how many words are in the file.\n", fp);
    fputs("Output the results.\n", fp);
    fclose(fp);
}

int vowelCount(const char* path) {
    FILE* fp = fopen(path, "r");
    if (!fp) {
        perror("fopen for read (vowelCount)");
        return -1;
    }
    int cnt = 0;
    int c;
    while ((c = fgetc(fp)) != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cnt++;
        }
    }
    fclose(fp);
    return cnt;
}

int wordCount(const char* path) {
    FILE* fp = fopen(path, "r");
    if (!fp) {
        perror("fopen for read (wordCount)");
        return -1;
    }
    int cnt = 0;
    int c;
    int inword = 0;
    while ((c = fgetc(fp)) != EOF) {
        if (isspace((unsigned char)c)) {
            inword = 0;
        }
        else {
            if (!inword) {
                cnt++;
                inword = 1;
            }
        }
    }
    fclose(fp);
    return cnt;
}

int main(void)
{
    const char* path = "test.txt";
    testWriteToFile(path);

    int vcount = vowelCount(path);
    int wcount = wordCount(path);

    if (vcount < 0 || wcount < 0) {
        fprintf(stderr, "Error reading file '%s'.\n", path);
        return 1;
    }

    printf("Vowel count: %d\n", vcount);
    printf("Word count: %d\n", wcount);

    return 0;
}