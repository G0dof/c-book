#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char cardName[3];
	int count = 0;

	while (cardName[0] != 'X')
	{
		int value = 0;
		puts("Enter the card name: ");
		scanf("%2s", cardName);

		switch (cardName[0])
		{
		case 'K':
		case 'Q':
		case 'J':
			value = 10;
			break;
		case 'A':
			value = 11;
			break;
		case 'X':
			puts("\nClosing program...");
			continue;
		default:
			value = atoi(cardName);
			if (value > 10 || value < 1)
			{
				puts("Incorrect value! Try again\n\n");
				continue;
			}
		}

		if (value > 2 && value < 7)
			count++;
		else if (value == 10)
			count--;
		printf("\nCurrent count: %i\n\n", count);
	}
	return 0;
}