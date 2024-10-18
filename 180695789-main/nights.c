#include <cs50.h>
#include <stdio.h>


float average(int quantity, int array[]);

int main(void)

 {
    int days = get_int("Numbers of days: ");
    int hours[days];

    for(int i = 0; i < days; i++)
{
    hours[i] = get_float("Hours of sleep: ");
}
    printf("Average of sleep: %.2f\n", average(days, hours));
 }

 float average(int quantity, int array[])
 {
    int sum = 0;
    for(int i = 0; i< quantity; i++)
    {
        sum += array[i];
    }
    return sum / (float) quantity;
 }
