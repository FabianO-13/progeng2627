#include <iostream>

int main() {

    double celsius;
    double fahrenheit;

    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    std::cout << "The temperature in Fahrenheit is: " << fahrenheit << std::endl;
    return 0;
}