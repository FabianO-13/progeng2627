#include <iostream>

void integer_division(int dividend, int divisor, int& quotient, int& remainder){

    if (divisor == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        quotient = 0;
        remainder = 0;
    }

    quotient = dividend / divisor;
    remainder = dividend % divisor;

}

int main() {

    int dividend, divisor, quotient, remainder;

    integer_division(10, 3, quotient, remainder);
    std::cout << ((quotient == 3 && remainder == 1)) << std::endl;

    integer_division(20, 4, quotient, remainder);
    std::cout << ((quotient == 5 && remainder == 0)) << std::endl;

    integer_division(7, 0, quotient, remainder);
    std::cout << ((quotient == 0 && remainder == 0)) << std::endl;

}