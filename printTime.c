#include <stdio.h>

typedef struct {
	int hours;
	int minutes;
	int seconds;
} Time;

void printTime(const Time* t) {
	printf("%02i:%02i:%02i\n", t->hours, t->minutes, t->seconds);
}	

Time NormalizeTime(Time input) {
	
	Time normalT;
	normalT.minutes = input.minutes + input.seconds / 60;
	normalT.seconds = input.seconds % 60;

	normalT.hours = input.hours + normalT.minutes / 60;
	normalT.minutes = normalT.minutes % 60;
	return normalT;	
}

int main() {
	Time currentTime = {14, 119, 65};
	printTime(&currentTime);
	currentTime = NormalizeTime(currentTime);
	printTime(&currentTime);
}