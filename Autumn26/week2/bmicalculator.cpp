#include <iostream>

int main() {

    double weight;
    double height;

    std::cout << "enter your weight in kilograms: ";
    std::cin >> weight;

    std::cout << "enter your height in meters: ";
    std::cin >> height;

    double bmi = weight / (height * height);
    std::cout << "your BMI is: " << bmi << std::endl;

    return 0;
}