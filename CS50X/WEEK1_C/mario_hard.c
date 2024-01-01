#include <cs50.h>
#include <stdio.h>

//declare function using in the program (w/o include in the library)
int get_size(void);
void print_grid(int n);

//using function declared in main
int main(void)
{
    int n = get_size();
    print_grid(n);
}

//function for getting height input
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n <= 0 || n >= 9);
    return n;
}

//function for printing hash
void print_grid(int n)
{
    for (int i = 1; i <= n; i++)            //number of row
    {
        int k = n;                          // while for first space in each row
        while (k > i)
        {
            printf(" ");
            k--;
        }
        for (int j = 0; j < i; j++)         //left hash
        {
            printf("#");
        }
        printf("  ");                       //2 spaces in each row
        for (int j = 0; j < i; j++)         //right hash
        {
            printf("#");
        }
        printf("\n");
    }
}