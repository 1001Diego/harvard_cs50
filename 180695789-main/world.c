#include <stdio.h>
#include <cs50.h>

int main(void)


{
    string first_name = get_string("What's your first name? ");
    string last_name = get_string("And your last name? ");
    string nickname = get_string("For last, what's your nickname? ");

    printf("Hello, %s %s! I Loved %s being your nickname.\n", first_name, last_name, nickname);

    int age = get_int("How old are you? ");
    printf("Wow, what a coincidence, I have %i years too!\n", age);
}
