#include <iostream>

int main() {

    double pounds;
    std::cout << "enter a number in pounds: ";
    std::cin >> pounds;

    double euros = pounds * 1.19;
    std::cout << "the equivalent in euros is: " << euros << std::endl;

    return 0;
}