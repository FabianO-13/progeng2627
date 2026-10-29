#include <iostream>
#include <vector>

int main() {

    std::vector<int> v;

    std::cout << "Please enter amount of numbers to filter" << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Please enter the numbers to filter" << std::endl;

    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "Please enter the value to filter" << std::endl;
    int filter;
    std::cin >> filter;

    std::cout << "The filtered values are:" << std::endl;

    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) < filter) {
            std::cout << v.at(i) << std::endl;
        }
    }

}