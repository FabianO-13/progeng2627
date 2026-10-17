#include <iostream>

int main(){
    double n, absv;
    std::cout << "please enter a number: ";
    std::cin >> n;

    if(n < 0){
        
        absv = -n;
    }
    else{
        // if not, its absolute value is the same as n
       absv = n;
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

}