#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {

    vout.clear();
    for (int i = 0; i < vin.size(); i++) {
        if (vin.at(i) < t) {
            vout.push_back(vin.at(i));
        }
    }


}

int main() {

    double a;
    std::vector<double> vin , vout;
    vin = {2 , 1.75 , 0.99 , 3.67 , 6.7};
    a = 3.5;
    filter_v(vin , a , vout);
    std::cout << (vout == std::vector<double> {2 , 1.75 , 0.99}) << std::endl;
    vin = {9 , 1.01 , 6 , 90 , 2};
    a = 5;
    filter_v(vin , a , vout);
    std::cout << (vout == std::vector<double> {1.01 , 2});

}