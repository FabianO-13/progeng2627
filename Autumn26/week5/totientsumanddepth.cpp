#include <iostream>

int gcd(int a, int b) {

    int temp = 0;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int euler_totient(int n) {

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (gcd(n, i) == 1) {
            count++;
        }
    }

    n = count;
    return n;

}

void sum_and_depth(int n , int& sum , int& depth) {

    sum = 0;
    depth = 0;

    while (n > 1) {
        int phi = euler_totient(n);
        sum += phi;
        n = phi;
        depth++;
    }
}

int main() {

    int n , sum , depth;
    sum_and_depth(30 , sum , depth);
    std::cout << ((sum == 15) && (depth == 4)) << std::endl;
    sum_and_depth(50 , sum , depth);
    std::cout << ((sum == 35) && (depth == 5)) << std::endl;

}