#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int a;
    do
    {
        a = get_int("Start size: ");
    }
    while (a < 9);
    // TODO: Prompt for end size
    int b;
    do
    {
        b = get_int("End size: ");
    }
    while (b < a);
    // TODO: [loop] Calculate number of years until we reach threshold
    int c = 0;    // set year passed integer
    while (a < b) // repeat calculation of llamas count until reached end numbers
    {
        a = a + (a / 3) - (a / 4);
        c++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", c);
}
