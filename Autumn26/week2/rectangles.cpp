#include <iostream>

int main() {

    double width;
    double height;

    std::cout << "enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "enter the height of the rectangle: ";
    
    std::cin >> height;
    double area = width * height;
    std::cout << "the area of the rectangle is: " << area << std::endl;

    double perimeter = 2 * (width + height);
    std::cout << "the perimeter of the rectangle is: " << perimeter << std::endl;

    return 0;
}