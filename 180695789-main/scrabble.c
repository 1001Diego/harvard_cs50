#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int points[] ={1, 3, 3,	2,	1,	4,	2,	4,	1,	8,	5,	1,	3,	1,	1,	3,	10,	1,	1,	1,	1,	4,	4,	8,	4, 10};

int compute_results(string answer);

int main(void)
{
    string answer1 = get_string("Player 1: ");
    string answer2 = get_string("Player 2: ");

    int results1 = compute_results(answer1);
    int results2 = compute_results(answer2);

    if (results1 > results2)
    {
        printf("Player 1 wins!!! Congratulations!\n");
    }
    else if (results1 < results2)
    {
        printf("Player 2 wins!!! Congratulations!\n");
    }
    else
    {
        printf("It's a tie... So I winned!!!\n");
    }

}

int compute_results(string answer)
{
    int results = 0;
    for (int i = 0, len = strlen(answer); i < len; i++)
    {
        if (isupper(answer[i]))
        {
            results += points[answer[i] - 'A'];
        }
        else if (islower(answer[i]))
        {
            results += points[answer[i] - 'a'];
        }
    }
return results;
}
