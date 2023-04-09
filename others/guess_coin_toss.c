// A simple game to guess the coin toss
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int number, guess;
	srand(time(NULL));

	// To get numbers between 0 and 1
	number = rand() % 2;

	printf("Guess 1 for tail or 0 for head: ");
	scanf("%d", &guess);

	printf("Result of coin toss is: ");
	if(number == 0) {
		printf("Head\n");
	} else {
		printf("Tail\n");
	}

	printf("You guessed: ");
	if (guess == 0) {
		printf("Head\n");
	} else {
		printf("Tail\n");
	}

	if(number == guess) {
		printf("\nHurray!!! You won the toss\n");
	} else {
		printf("\nOops! Better Luck Next Time\n");
	}
	return 0;
}