#include <iostream>

void area_and_perimeter(int length, int width, int& area1, int& perimeter2){

    area1 = length * width;
    perimeter2 = 2 * (length + width);

}
int main() {

    int length , width , area , perimeter;

    area_and_perimeter(5, 10, area, perimeter);
    std::cout << ((area == 50 && perimeter == 30)) << std::endl;

    area_and_perimeter(7, 3, area, perimeter);
    std::cout << ((area == 21 && perimeter == 20)) << std::endl;

    area_and_perimeter(0, 0, area, perimeter);
    std::cout << ((area == 0 && perimeter == 0)) << std::endl;
}

