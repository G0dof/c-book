/*

Exercise to verify if the codes below work, and why not.

*/

#include <stdio.h>

int codeA()
{
    int card = 1;
    if (card > 1)
        card -= 1;
        if (card < 7)
            puts("Small card");
    else{
        puts("Ace!");
    }
    return 0;
}

int codeB()
{
    int card = 1;
    if (card > 1)
    {
        card -= 1;
        if (card < 7)
            puts("Small card");
    else
        puts("Ace!");
    }
    return 0;
}

int codeC()
{
    int card = 1;
    if (card > 1)
    {
        card -= 1;
        if (card < 7)
            puts("Small card");
    } else
        puts("Ace!");
    return 0;
}

/*

int codeD()
{
    int card = 1; 
    if (card > 1) {   <--- error = missing closing bracs
        card -= 1;
        if (card < 7)
            puts("Small card");
    else
        puts("Ace!");
    return 0;
}
*/

int main(int argc, char const *argv[])
{   
    codeA();
    codeB();
    codeC();
    // codeD();
}
