#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
int main(void) 
{
	bool in_hand[NUM_SUITS][NUM_RANKS]={false};
	int num_cards, rank, suits;
	const char rank_code[] = { '2','3','4','5','6','7','8','9','t','j','q','k','a' };
	const char suit_code[] = { 'c','d','h','s' };

	srand((unsigned)time(NULL));

	printf("Enter number of cards in hands: ");
	scanf_s("%d", &num_cards)
	return 0;
}