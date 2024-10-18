#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv [])
{
    if (argc > 1)
{
    for (int i = 0; i <argc; i++)
    {
            printf("Hello, %s\n", argv[i]);
    }
}
    else
    {
        printf("Hello, World\n");
    }
}
