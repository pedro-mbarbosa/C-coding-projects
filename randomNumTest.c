#include <stdio.h>
#include <stdlib.h> // for random number generation
#include <time.h> //for time 

int main() {
    srand(time(NULL));
    int oneCount = 0;
    int numRolls;

    printf("Choose how many times will the dice roll: ");
    scanf_s("%d", &numRolls);

    for (int i = 0; i < numRolls; i++) {
        int diceRoll = rand() % 6 + 1;
        if (diceRoll == 1) {
            oneCount++;
        }
    }

    float frequency = (oneCount / (float)numRolls) * 100;
    printf("Frequency of getting 1: %.2f%%\n", frequency);

    return 0;
}