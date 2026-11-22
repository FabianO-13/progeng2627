#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }
    std::vector<std::vector<double>> matrix;
    std::string line;
    while (std::getline(infile, line)) {
        std::stringstream ss(line);
        std::vector<double> row;
        double value;
        while (ss >> value) {
            row.push_back(value);
        }
        matrix.push_back(row);
    }
    infile.close();
    return matrix;
}

std::string output_matrix(std::vector<std::vector<double>> matrix) {
    std::stringstream out;
    out << std::fixed << std::setprecision(2);
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            out << matrix[i][j] << "\t";
        }
        out << std::endl;
    }
    return out.str();
}

std::vector<std::vector<double>> matrix_multiply(const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2) {

    std::vector<std::vector<double>> out;

    for (int i = 0; i < m1.size(); i++) // iterate over rows of m1
    {
        std::vector<double> row;
        for (int j = 0; j < m2[0].size(); j++) // iterate over columns of m2
        {
            double sum = 0.0;
            for (int k = 0; k < m1[0].size(); k++) {
                sum += m1[i][k] * m2[k][j];
            }
            row.push_back(sum);
        }
        out.push_back(row);
    }
    return out;
}


int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);
    std::cout << "Matrix 1:" << std::endl;
    std::cout << output_matrix(m1) << std::endl;
    std::cout << "Matrix 2:" << std::endl;
    std::cout << output_matrix(m2) << std::endl;
    std::cout << "Do you want to multiply these matrices? (y/n): ";
    char response;
    std::cin >> response;
    if (response == 'y' || response == 'Y') {
        int m1_cols = m1[0].size();
        int m2_rows = m2.size();
        if (m1_cols != m2_rows) {
            std::cout << "Error: Matrix dimensions are incompatible for multiplication" << std::endl;
            return 1;
        }
        std::vector<std::vector<double>> result = matrix_multiply(m1, m2);
        std::cout << "Result of multiplication:" << std::endl;
        std::cout << output_matrix(result) << std::endl;
    } else {
        std::cout << "Multiplication canceled." << std::endl;
    }

    return 0;
}