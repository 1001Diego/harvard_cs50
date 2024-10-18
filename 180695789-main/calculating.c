//Library
#include <cs50.h>
#include <stdio.h>

//Main
int main(void)
{
    //Creating the elements
    double number1, number2;
    char operator;

    printf("Enter the operator ( + - * /): ");
    scanf("%c", &operator);

    printf("Enter the numbers: ");
    scanf("%lf %lf", &number1, &number2);
    
    //Make the calculating possibilities
    switch(operator)
    {
    case '+':
    printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 + number2);
    break;

    case '-':
    printf("%.2lf - %.2lf = %.2lf\n", number1, number2, number1 - number2);
    break;

    case '*':
    printf("%.2lf * %.2lf = %.2lf\n", number1, number2, number1 * number2);
    break;

    case '/':
    printf("%.2lf / %.2lf = %.2lf\n", number1, number2, number1 / number2);
    break;

    //Operator is any of these above
    default:
    printf("An error has occured, operator isn't correct!\n");
}
    //Tells that ran sucessfully
return 0;
}
