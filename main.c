#include <stdio.h>
#include <stdlib.h>

// structures
struct Lexer {
    char* input;
    int position;
    int readPosition;
    char ch;
};

// functions
void readChar(struct Lexer *l);

struct Lexer *newLexer(char* input);

void startRepl();

int main()
{
    char *user = getenv("USER");
    if (user == NULL)
    {
        printf("Could not get the current user\n");
    }
    printf("Hello %s! Welcome to the monkey proggramming language.\n", user);

    printf("Feel free to type in commands\n");

    startRepl(); 
} 


void startRepl()
{
    char userInput[100];

    while (1)
    {
        printf(">> ");

        if (fgets(userInput, sizeof(userInput), stdin) == NULL)
        {
	        
        }
        newLexer(userInput);
    }
}




struct Lexer *newLexer(char* input){
    struct Lexer lexer;
    lexer.input = input;
    readChar(&lexer);
}

void readChar(struct Lexer *l){
    l->ch = 'a';
}
