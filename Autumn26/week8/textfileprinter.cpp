#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::ifstream infile;
    infile.open(argv[1]);

    if (!infile.is_open()) {
        std::cout << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    std::string tmp;
    while (infile >> tmp) {
        std::cout << tmp << std::endl;
    }
    infile.close();
}
