#include <iostream>

int main() {

    std::string unitin , unitout;

    double tempin , tempout;

    std::cout << "Enter the temperature: ";
    std::cin >> tempin;

    std::cout << "Enter the input unit: ";
    std::cin >> unitin;

    bool valid_unit = true;


    if (unitin == "C" || unitin == "c") {
        tempout = (tempin * 9/5) + 32;
        unitout = "F";
    }
    else if (unitin == "F" || unitin == "f") {
        tempout = (tempin - 32) * 5/9;
        unitout = "C";
    }
    else {
        valid_unit = false;
    }

    if (valid_unit) {
        std::cout << tempout << " " << unitout << std::endl;
    }
    else {
        std::cout << "Error: input not recognised." << std::endl;
    }

    return 0;
}