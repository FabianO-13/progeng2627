#include <iostream>
#include <vector>

int main() {

    std::vector<int> v;

    std::cout << "Please enter amount of numbers to filter" << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Please enter the numbers" << std::endl;

    for (int i = 0; i < n; i++) {
        int tmp;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "Please enter a number s" << std::endl;
    int filter;
    std::cin >> filter;

    int count = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == filter) {
            count++;
        }
    }

    std::cout << "The value " << filter << " occurs " << count << " times at indices: " << std::endl;

    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) == filter) {
            std::cout << i << " ";
        }
    }

}