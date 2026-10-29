#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin) {
int L = 10000000;
int index;
for(int i = 0; i < vin.size(); i++) {

    if (vin[i] < L) {
        L = vin[i];
    }
}

 for (int m = 0; m < vin.size(); m++) {
        if (vin.at(m) == L) {
            index = m;
        }
    }
 return index;
}


int main() {

    std::vector <double> v{3, 0.5 ,-1}; 
    std::cout << (min_vector_element(v) == 2) << std::endl;

    v = {2, 5, 8, 11, 3, 7, 2, 9};
    std::cout << (min_vector_element(v) == (6)) << std::endl;


}