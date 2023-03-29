//
// Created by felic on 7/7/2022.
//
#include "guessWhatImThinking.h"

void output(std::string message)
{
    std::cout << message;
}
char input()
{
    char choice;
    std::cin >> choice;

    return choice;
}

bool repeat(std::string message)
{
    output(message);
    char choice = input();

    return tolower(choice) == 'y';
}

int charToInt(char c)
{
    return c - '0';
}
std::string accuracy(int userGuess, int compGuess)

{
    if (userGuess > compGuess)
    {
        return "Too high. Guess again: \n";
    }
    else if (userGuess < compGuess)
    {
        return "Too low. Guess again:\n";
    }
    else
    {
        return "Correct\n";
    }

}