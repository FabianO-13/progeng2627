#include <iostream>

int main(){
    double n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;
}