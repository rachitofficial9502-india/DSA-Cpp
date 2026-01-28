// Find floor(sqrt(n)) for n = 26 using Binary search.

// What are we searching for?
// The LAST value where condition is TRUE

#include <iostream>

int main() {

    int n = 100;
    int low = 0, high = n, mid;
    int result = -1;

    while (low <= high) {

        mid = (low + high) / 2;

        if (mid*mid <= n) {

            result = mid;
            low = mid + 1;

        }
        else {

            high = mid - 1;

        }

    }

    if (result == -1) {
        std::cout << "No such number in given range." << std::endl;
    }
    else {
        std::cout << "The number is : " << result << std::endl;
    }

    return 0;
}