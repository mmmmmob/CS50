#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do // request no. of height
    {
        n = get_int("Height: ");
    }
    while (n <= 0 || n >= 9);

    for (int i = 1; i <= n; i++) // no. of row
    {
        int k = n;
        while (k > i) // no. of spaces in each line
        {
            printf(" ");
            k--;
        }
        for (int j = 0; j < i; j++) // no. of blocks
        {
            printf("#");
        }
        printf("\n");
    }
}