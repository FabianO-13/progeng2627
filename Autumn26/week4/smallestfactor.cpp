#include <iostream>

int smallest_factor (int n) {
    
    if (n <= 1) {
        return n; // Return n itself for 0 and 1
    }
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            return i; // Return the smallest factor
        }
    }
    return n; // Return n itself if no smaller factor is found
}


int main() {
    std::cout << (smallest_factor(10) == 2) << std::endl;
    std::cout << (smallest_factor(15) == 3) << std::endl;
    std::cout << (smallest_factor(17) == 17) << std::endl;
    std::cout << (smallest_factor(1) == 1) << std::endl;
}