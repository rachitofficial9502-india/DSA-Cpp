/* 
Find Square Root (up to 6 decimal places)

Given:
n = 10

Find:
sqrt(10) ≈ 3.162277

Rules:
Do NOT use sqrt()
Use binary search
Stop when answer is accurate up to 6 decimal places */

#include <iostream>

int main() {

    int n = 10;

    double low = 0, high = n, mid = 0, result = 0;

    while ((high - low) > (1e-6)) {

        mid = (low + high) / 2;

        if (mid*mid <= n) {
            result = mid;
            low = mid;
        }
        else {
            high = mid;
        }

    }

    std::cout << "The number is : " << result << std::endl;

    return 0;
}