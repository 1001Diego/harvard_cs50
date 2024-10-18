#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user for positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    //Print an n-by-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (n - i - 2 < j)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
    }

    printf(" ");

    for(int k = n; k > 0; k--)
    {
        if(n - k - 1 < i)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
        }
        printf("\n");
    }

}
