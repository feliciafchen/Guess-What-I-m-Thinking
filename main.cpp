#include <iostream>
#include "guessWhatImThinking.h"

int main()
{
    srand(time(0));

    int userGuess;
    char choice;

    do
    {
        const int guess = rand() % 9 + 1;
        output("I'm thinking of a number between 1 - 9, take a guess:\n");
        do
        {
            userGuess = charToInt(input());
            std::cout << accuracy(userGuess, guess);
        }
        while (userGuess != guess);
    }
    while (repeat("Repeat? y/n\n"));

    return 0;
}
