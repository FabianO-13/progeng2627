#include <iostream>
#include <cmath>

int main() {

    double sum = 0;
    double base;
    int exponent;
    std::cout << "Enter a base and exponent: ";
    std::cin >> base >> exponent;
    for(int i = 1; i <= exponent; i++){
        sum += std::pow(base, i);
    }
    std::cout << "Sum of powers from 1 to " << exponent << ": " << sum << std::endl;

    return 0;
}