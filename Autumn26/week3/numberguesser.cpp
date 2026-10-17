#include <iostream>
#include <string>


int main() {

    int lowerBound;
    int upperBound;
    int attempts = 0;

    std::cout << "I will guess the number you are thinking of" << std::endl;
    std::cout << "Enter a lower bound: ";
    std::cin >> lowerBound;
    std::cout << "Enter an upper bound: ";
    std::cin >> upperBound;

    while (lowerBound <= upperBound) {
        attempts++;
        int guess = lowerBound + (upperBound - lowerBound) / 2;
        std::cout << "Is your number " << guess << "? ";
        std::string response;
        std::cin >> response;

        if (response == "yes" || response == "Yes" || response == "YES") {
            std::cout << "I guessed your number in " << attempts << " attempts!" << std::endl;
            break;
        } else {
            std::cout << "Is your number higher or lower than " << guess << "? ";
            std::cin >> response;

            if (response == "higher" || response == "Higher" || response == "HIGH") {
                lowerBound = guess + 1;
            } else if (response == "lower" || response == "Lower" || response == "LOW"  ) {
                upperBound = guess - 1;
            } else {
                std::cout << "Invalid input. Please enter 'higher' or 'lower'." << std::endl;
            }
        }

        if (lowerBound > upperBound) {
            std::cout << "It seems there is a contradiction in your responses. Please check your answers." << std::endl;
            break;
        }
    }
     
    return 0;

}