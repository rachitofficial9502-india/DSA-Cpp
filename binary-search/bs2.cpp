// Finding lower bound and upper bound using binary search.
// also counting occurence.

#include <iostream>

int main () {

    int size = 10;
    int array[size] = {1, 2, 3, 3, 7, 7, 7, 9, 11, 13};

    int x = 7;

    int low = 0;
    int high = size - 1;
    int mid;
    int result = size;
    while (low <= high) {

        mid = (low + high) / 2;

        if (array[mid] >= x) {
            result = mid;
            high  = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

    int lower_bound = result;

    std::cout << "Lower Bound : " << lower_bound << std::endl;

    low = 0;
    high =  size - 1;
    mid = 0;
    result = size;
    while (low <= high) {

        mid = (low + high) / 2;

        if (array[mid] > x) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

    int upper_bound = result;

    std::cout << "Upper Bound : " << upper_bound << std::endl;

    int count = upper_bound - lower_bound;
    std::cout << "Count : " << count << std::endl;

    return 0;
}

// Lower Bound of x means:
// The first index i such that array[i] >= x

// Upper Bound of x means:
// The first index i such that array[i] > x

// Count = upper bound - lower bound