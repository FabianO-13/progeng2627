#include <iostream>

// we can define a function that returns a bool

bool leap_year(int year){
    bool ly;

    // TODO: check whether the year is a leap year or not
    // store result in variable ly
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        ly = true;
    } else {
        ly = false;
    }

    return ly;
    // we *do not print* anything in the function
}

int main(){

    std::cout << (leap_year(1600) == true) << std::endl; // should print 1
    std::cout << (leap_year(1700) == false) << std::endl; // should print 1
    std::cout << (leap_year(1800) == true) << std::endl; // should print 0
    std::cout << (leap_year(1900) == false) << std::endl; // should print 1
    std::cout << (leap_year(2000) == true) << std::endl; // should print 1

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}