#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    vout.clear();
    for (int i = 0; i < vin1.size(); ++i) {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); ++i) {
        bool found = false;
        for (int j = 0; j < vin1.size(); ++j) {
            if (vin2[i] == vin1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    vout.clear();
    for (int i = 0; i < vin1.size(); ++i) {
        for (int j = 0; j < vin2.size(); ++j) {
            if (vin1[i] == vin2[j]) {
                vout.push_back(vin1[i]);
                break;
            }
        }
    }
}

int main() {

    std::string inputfilename1 , inputfilename2;
    std::cout << "enter name of first input file" << std::endl;
    std::cin >> inputfilename1;
    std::cout << "enter name of second input file" << std::endl;
    std::cin >> inputfilename2;

    std::vector<std::string> v1, v2;

    std::ifstream infile1;
    infile1.open(inputfilename1);

    if(!infile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;
    while (infile1 >> tmp){
        v1.push_back(tmp);
    }

    infile1.close();

    std::ifstream infile2;
    infile2.open(inputfilename2);

    if(!infile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while (infile2 >> tmp){
        v2.push_back(tmp);
    }

    infile2.close();

    std::vector<std::string> v_union, v_intersection;
    union_vector(v1, v2, v_union);
    intersection_vector(v1, v2, v_intersection);

    std::ofstream outfile_union;
    outfile_union.open("union.txt");
    if(!outfile_union.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < v_union.size(); ++i){
        outfile_union << v_union[i] << std::endl;
    }
    outfile_union.close();

    std::ofstream outfile_intersection;
    outfile_intersection.open("intersection.txt");
    if(!outfile_intersection.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < v_intersection.size(); ++i){
        outfile_intersection << v_intersection[i] << std::endl;
    }
    outfile_intersection.close();

}