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

int euler_totient(int n) {

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (gcd(n, i) == 1) {
            count++;
        }
    }

    return count;

}

int main() {

    std::cout << (euler_totient(9) == 6) << std::endl;
    std::cout << (euler_totient(10) == 4) << std::endl;
    std::cout << (euler_totient(11) == 10) << std::endl;
    std::cout << (euler_totient(48) == 16) << std::endl;


}