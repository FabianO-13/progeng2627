#include <iostream>

void area_and_perimeter(int length, int width, int& area1, int& perimeter2){

    area1 = length * width;
    perimeter2 = 2 * (length + width);

}
int main() {

    int length , width , area , perimeter;
    std::cout << "please enter the length and width of a rectangle:" << std::endl;
    std::cin >> length >> width;
    area_and_perimeter(length, width, area, perimeter);
    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
}

