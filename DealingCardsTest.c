#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int CardDealt[4][13] = { 0 };
int CardCount = 0;

void DealCard() {

	char* suits[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	char* faces[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };

	if(CardCount >= 52) {
		printf("All cards have been dealt!\n");
		return;
	}
	int randomFace, randomSuit;
	int foundCard = 0;
	while (!foundCard)
	{
		randomFace = rand() % 13;
		randomSuit = rand() % 4;

		if(CardDealt[randomSuit][randomFace] == 0) {
			CardDealt[randomSuit][randomFace] = 1;
			foundCard = 1;
			break;
		}

	}
	
	printf("%s of %s\n", faces[randomFace], suits[randomSuit]);

	CardCount++;
}

void DealHand(int numberOfCards) {
	printf("\nDealing a hand of 5 cards:\n");
	for (int i = 0; i < 5; i++) {
		DealCard();
	}
}	

void DealGame() {
	DealHand(5);
	DealHand(5);
}	

void main() {
	
	srand(time(NULL));
	DealGame();

}
