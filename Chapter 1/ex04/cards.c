#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) 
{
	char cardName[3];
	int value = 0;
	puts("Enter the card name: ");
	scanf("%2s", cardName);
	
	switch(cardName[0]) { // Switch statements verify only one value.
		case 'K':
		case 'Q':
		case 'J':
			value = 10;
			break;
		case 'A':
			value = 11;
			break;
		default:
			value = atoi(cardName);
	}
	printf("The card value is: %i\n", value);
    return 0;
}