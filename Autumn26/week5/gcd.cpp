#include <iostream>

int gcd(int a, int b) {

    int temp = 0;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;

}

int main() {

    std::cout << (gcd(48, 18) == 6) << std::endl;
    std::cout << (gcd(647, 123) == 1) << std::endl;

    return 0;
}