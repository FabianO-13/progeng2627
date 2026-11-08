#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    vout.clear();
    int i = 0, j = 0;
   while (i < vin1.size() && j < vin2.size()) {
        if (vin1.at(i) < vin2.at(j)) {
            vout.push_back(vin1.at(i));
            i++;
        } else {
            vout.push_back(vin2.at(j));
            j++;
        }
   }

   while (i < vin1.size()) {
        vout.push_back(vin1.at(i));
        i++;
    }

    while (j < vin2.size()) {
        vout.push_back(vin2.at(j));
        j++;
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {2, 6, 13, 20, 50};
    v2 = {3, 13, 14, 15, 20, 25};
    expected_output = {2, 3, 6, 13, 13, 14, 15, 20, 20, 25, 50};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}