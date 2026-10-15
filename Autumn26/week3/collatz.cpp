#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int count = 0;

    while(n != 1){
        std::cout << n << " ";
        count++;
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    std::cout << "\nNumber of steps: " << count << std::endl;
    return 0;
}