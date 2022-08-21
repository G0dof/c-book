/*

Program to evaluate face values.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char cardName[3];
    int value = 0;
    puts("Enter the card name: ");
    scanf("%2s", cardName);
    
    if (cardName[0] == 'K')
        value = 10;
    else if (cardName[0] == 'Q')
        value = 10;
    else if (cardName[0] == 'J')
        value = 10;
    else if (cardName[0] == 'A')
        value = 11;
    else
        value = atoi(cardName);
    printf("The card value is: %i\n", value);
    return 0;
}
