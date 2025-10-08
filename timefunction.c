#include <stdio.h>

void NormalizeTime(int n, int* phours, int* pmin, int* psec) {
    *phours = n / 3600;
    *pmin = (n % 3600) / 60;
    *psec = n % 60;
}

int main() {
    int n;
    int hours, min, sec;

    printf("How many seconds? : ");
    scanf_s("%d", &n);

    NormalizeTime(n, &hours, &min, &sec);

    printf("%d seconds = %d hours, %d minutes, %d seconds\n", n, hours, min, sec);


}
