#include <iostream>
#include <string>

void swapStrings(std::string& str1, std::string& str2) {
    std::string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main() {

    std::string str1 , str2;
    std::cout << "please enter two strings" << std::endl;
    std::cin >> str1 >> str2;
    std::cout << "you entered: " << str1 << " and " << str2 << std::endl;

    swapStrings(str1, str2);

    std::cout << "after swapping: " << str1 << " and " << str2 << std::endl;

}