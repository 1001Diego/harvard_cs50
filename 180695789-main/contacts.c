#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string first_name = get_string("Your name: ");
    string last_name = get_string("Your last name: ");
    int age = get_int("Your age: ");
    string number = get_string("Your phone number: ");

    printf("Name: %s %s\n", first_name, last_name);
    printf("Age: %i\n", age);
    printf("Number: %s\n", number);
}
