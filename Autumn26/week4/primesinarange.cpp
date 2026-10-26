#include <iostream>

void primes_range(int start, int end) {

    for (int num = start; num <= end; ++num) {
        bool found_factor = false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                found_factor = true;
                break;
            }
        }
        if (!found_factor && num > 1) {
            std::cout << num << std::endl;
        }
    }
}

int main() {

    std::cout << "Enter the start and end of the range: ";
    int start, end;
    std::cin >> start >> end;
    std::cout << "List of prime numbers between " << start << " and " << end << ":" << std::endl;
    primes_range(start, end);

}