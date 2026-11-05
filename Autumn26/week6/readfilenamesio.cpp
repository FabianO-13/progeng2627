#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    std::vector<std::string> v;
    while (infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }
    outfile.close();
}