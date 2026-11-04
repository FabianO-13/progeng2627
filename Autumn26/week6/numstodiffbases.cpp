#include <iostream>
#include <vector>
#include <cmath>

bool digits_in_base(int num, int base, std::vector<int>& digits) {
    if (base < 2 || base > 16) {
        return false;
    }
    else {
        digits.clear();
        while (num > 0) {
            digits.push_back(num % base);
            num /= base;
        }
        return true;
    }
}

void print_digits_as_number(const std::vector<int>& digits) {
    for (int digit = digits.size() - 1; digit >= 0; --digit) {
        if (digits[digit] < 10) {
            std::cout << digits[digit];
        } else {
            std::cout << static_cast<char>('A' + (digits[digit] - 10));
        }
    } std::cout << std::endl;
}

int digits_to_decimal(const std::vector<int>& digits, int base) {
    int decimal = 0;
    int power = 0;

for (int i = 0; i < digits.size(); ++i) {
            decimal += digits[i] * std::pow(base, power);
        power++;
    }

    return decimal;
}

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        print_digits_as_number(digits);

        int decimal = digits_to_decimal(digits, base);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}