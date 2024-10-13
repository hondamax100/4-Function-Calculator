#include <stdio.h>

#define ITERATION 13

char* suit_str[] = {"Hearts", "Diamonds", "Spades", "Clubs"};
char* value_str[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"}; 

int main (void)
{
	for (int i = 0; i < 52; i+=ITERATION) {
		printf("Suit: %s, Value: %s\n", suit_str[i/(52/4)], value_str[i%(52/4)]);
	}

	return 0;
}
