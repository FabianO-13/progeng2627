#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void count_occurrences(const std::vector<std::string>& vin, const std::string& text) {
    int count = 0;
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == text) {
            count++;
        }
    }
    std::cout << "The word '" << text << "' occurs " << count << " times." << std::endl;
}

int main() {
    std::ifstream infile;
    infile.open("text.txt");
    if (!infile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::string> v;
    std::string tmp;

    while (infile >> tmp) {
        v.push_back(tmp);
    }
    infile.close();

    std::string text;
    text = "the";
    count_occurrences(v,text);
    text = "I";
    count_occurrences(v,text);
    text = "in";
    count_occurrences(v,text);
}