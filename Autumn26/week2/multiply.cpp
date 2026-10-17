#include <iostream>

int main() {
    double a;
    double b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    double c = a * b;
    std::cout << "The product is: " << c << std::endl;
    return 0;
}