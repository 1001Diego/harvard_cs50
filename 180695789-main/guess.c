#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 9;

    int guess = get_int("What's your guess? ");

    if (guess != number)
    {
        printf("Idiot, you are obviously wrong.\n");
        return 0;
    }
    else
    printf("You're right!\n");
    return 0;
}
