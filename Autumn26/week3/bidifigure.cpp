#include <iostream>

int main(){

    int n;
    std::cout << "Enter height: ";
    std::cin >> n;

    int m;
    std::cout << "Enter width: ";
    std::cin >> m;

    int x = 0 , y = 0;

    while (x < n) {
        while (y < m) {
            std::cout << "* ";
            y++;
        }
        std::cout << std::endl;
        y = 0;
        x++;
    }
}