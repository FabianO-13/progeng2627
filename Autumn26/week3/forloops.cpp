#include <iostream>

int getNumber(){

    int x;
    std::cout << "Enter an exponent: ";
    std::cin >> x;
    return x;
}
int main(){

    int y;
    std::cout << "Enter a base: ";
    std::cin >> y;

    int exponent = getNumber();
    int result = 1;
    for(int i = 0; i < exponent; i++){
        result *= y;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}