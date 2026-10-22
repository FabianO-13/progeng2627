#include <iostream>

void myswap(double& s1, double& s2){

    double tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;

}

void sort_three_numbers(double& n1, double& n2, double& n3){
    if (n1 > n2){
        myswap(n1, n2);
    }
    if (n2 > n3){
        myswap(n2, n3);
    }
    if (n1 > n2){
        myswap(n1, n2);
    }
}
int main() {

    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    std::cout << "you entered: " << n1 << " " << n2 << " " << n3 << std::endl;
    sort_three_numbers(n1, n2, n3);
    std::cout << "after sorting: " << n1 << " " << n2 << " " << n3 << std::endl;
}