// Find the minimum integer k such that
// k³ ≥ 100

#include <iostream>

int main() {

    int n = 100;

    int low = 0; int high = n;
    int mid, result;

    while (low <= high) {

        mid = (low + high) / 2;

        if (mid*mid*mid >= n) {

            result = mid;
            high = mid - 1;

        }
        else {

            low = mid + 1;

        }

    }

    std::cout << "The number is : " << result << std::endl;

    return 0;
}