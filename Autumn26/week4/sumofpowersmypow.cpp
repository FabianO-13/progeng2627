#include <iostream>

double mypow(double base, int exp){
    double result = 1.0; 
    if (exp > 0) {
        for (int i = 0; i < exp; i++) {
            result *= base; 
        }
    } else if (exp < 0) {
        for (int i = 0; i < -exp; i++) {
            result *= base; 
        }
        result = 1.0 / result;
    }

    return result;
}

int main(){

    std::cout << "enter a base and exponent: ";
    double base , exponent;
    std::cin >> base >> exponent;
    double sum = 0;
    for (int i = 1; i <= exponent; i++){
        sum += mypow(base, i);
    }
    std::cout << "sum of powers: " << sum << std::endl;

}