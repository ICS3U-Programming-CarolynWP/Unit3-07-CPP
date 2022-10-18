// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/18
// Asks the user yes or no questions to determine
// Whether they are eligible to date the program's
// Grandchild.

#include <iostream>
#include <string>

int main() {
    // Variables for the correct number and guess
    std::string richAnswer;
    std::string looksAnswer;
    int richInteger;
    int looksInteger;

    // Title
    std::cout << "Dating Game: Can you date my grandchild??\n";
    std::cout << "Enter 1 for 'yes' and 0 for 'no'.\n";

    // User input for the two questions
    std::cout << "Are you rich??: ";
    std::cin >> richAnswer;
    std::cout << "Are you VERY good-looking???: ";
    std::cin >> looksAnswer;
    // Try Catch statement to make sure the answer is an integer
    try {
        richInteger = std::stoi(richAnswer);
        looksInteger = std::stoi(richAnswer);
    } catch (std::invalid_argument) {
        // Message that will be displayed if the user does not enter
        // An integer
        std::cout << "Please enter an integer!";
    }

    // IF statement to make sure the answers are 1 or 0
    if (richInteger != 1 && richInteger != 0 || looksInteger
    != 1 && looksInteger != 0) {
        std::cout << "You must answer 1 for yes and 0 for no.";
    } else {
        // IF statement if the user answers yes to any of the questions
        if (richInteger == 1 || looksInteger == 1) {
            std::cout << "You can date my grandchild!";
        } else {
            std::cout << "Apologies, but you are unable to date my grandchild.";
        }
    }
}
