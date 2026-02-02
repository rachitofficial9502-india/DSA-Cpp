/* 
You are given a sorted array rotated at an unknown pivot.

Example:
[4, 5, 6, 7, 0, 1, 2]
This was originally:
[0, 1, 2, 4, 5, 6, 7]

Goal:
Find the minimum element in O(log n) time. 
*/

#include <iostream>
using namespace std;

int main() {

    int size = 6;
    int array[size] = {3, 4, 5, 6, 1, 2};

    int low = 0, high = size - 1, mid = 0;

    while (low < high) {

        mid = low + (high - low) / 2;

        if (array[mid] > array[high]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }

    }

    cout << "The smallest number is : " << array[high] << endl;

    return 0;
}