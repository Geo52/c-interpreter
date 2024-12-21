#include <stdio.h>
#include <stdlib.h>

// functions
int startREPL()
{
    char userInput[100];

    while (1)
    {
        printf(">> ");
        // exits if user presses ctrl + D
        if (fgets(userInput, sizeof(userInput), stdin) == NULL)
        {
            return 1;
        }
    }
}

int main()
{
    char *user = getenv("USER");

    printf("Hello %s! Welcome to the monkey programming language.\n", user);
    printf("Feel free to type in commands\n");

    startREPL();
}