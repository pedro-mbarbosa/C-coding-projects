#include <stdio.h>


int totalSeconds(int hours, int min, int seconds) {
    int total = 0;
    total += hours * 3600;
    total += min * 60;
    total += seconds;
    return total;
}


int main() {
    int hours, min, seconds;
    int total;

    
    printf("Enter hours: ");
    scanf_s("%d", &hours);

    printf("Enter minutes: ");
    scanf_s("%d", &min);

    printf("Enter seconds: ");
    scanf_s("%d", &seconds);

    
    total = totalSeconds(hours, min, seconds);

    
    printf("Total seconds = %d\n", total);

    return 0;
}

