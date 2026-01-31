/* 
Problem: Find the k-th root of a number (with decimals)

Given:
n (number)
k (root)

Goal:
Find x such that:
x^k ≈ n
accurate up to, say, 6 decimal places.

Example:
n = 27
k = 3
Answer ≈ 3

Example (non-perfect):
n = 10
k = 3
Answer ≈ 2.154434 
*/

#include <iostream>

double power(double mid, int k) {

    double result = 1.0;
    for (int i = 0; i < k; i++) {
        result *= mid;
    }
    return result;

}

int main() {

    int n = 1000;
    int k = 30;

    double low = 0, high = n, mid = 0;

    while (high - low > 1e-6) {

        mid = (low + high) / 2.0;

        if (power(mid, k) <= n) {
            low = mid;
        }
        else {
            high = mid;
        }

    }

    std::cout << "The k-th root is : " << low << std::endl;

    return 0;
}