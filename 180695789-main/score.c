#include <cs50.h>
#include <stdio.h>

float average(int quantity, int array[]); //showing a 

int main(void)
{
    int numberscores = get_int("Number of scores: ");
    int score[numberscores];

    for(int i = 0; i < numberscores; i++)
{
       score[i] = get_int("Score: ");
}
    printf("Average: %.2f\n", average(numberscores, score));
}

float average(int quantity, int array[])
{
    int sum = 0;
    for (int i = 0; i < quantity; i++)
    {
        sum += array[i];
    }
    return sum / (float) quantity;
}
