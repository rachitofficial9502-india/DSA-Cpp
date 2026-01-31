/* 
Problem :
Given an array where values first decrease then increase, find the minimum element.
*/

#include <iostream>

int main() {

    int size = 7;
    int array[size] = {9, 7, 3, 2, 4, 6, 8};

    int low = 0, high = size - 1, mid;

    while (low < high) {

        mid = (high + low) / 2;

        if (array[mid] <= array[mid + 1]) {
            high = mid;
        }
        else {
            low = mid + 1;
        }

    }

    std::cout << "The minimum number is : " << array[high] << std::endl;

    return 0;
}