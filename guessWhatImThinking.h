//
// Created by felic on 7/7/2022.
//
#include <iostream>

#ifndef GUESSWHATIMTHINKING_GUESSWHATIMTHINKING_H
#define GUESSWHATIMTHINKING_GUESSWHATIMTHINKING_H

void output(std::string message);
char input();
bool repeat(std::string message);
int charToInt(char c);
std::string accuracy(int userGuess, int compGuess);

#endif //GUESSWHATIMTHINKING_GUESSWHATIMTHINKING_H
