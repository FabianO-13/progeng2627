#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1 , const std::vector<int>& vin2 , std::vector<int>& vout) {

    for (int i = 0; i < vin1.size(); i++) {

        vout.push_back(vin1.at(i));
    }

    for (int i = 0; i < vin2.size(); i++) {

        vout.push_back(vin2.at(i));

    }
}

int main() {
    std::vector<int> vin1 , vin2 , vout;
    vin1 = {2 , 3 , 1 , 4} , vin2 = {5 , 6 , 7};
    append_vectors(vin1 , vin2 , vout);
    std::cout << (vout == std::vector<int>{2, 3, 1, 4, 5, 6, 7});

}