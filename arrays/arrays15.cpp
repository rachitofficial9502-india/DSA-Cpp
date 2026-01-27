// Two Pointers.
// Check if a pair with sum = X exists.

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int x = 6;

    int left  = 0;
    int right = size - 1;
    int sum;
    while (left < right) {

        sum = array[left] + array[right];

        if (sum < x) {
            left++;
        }
        else if (sum > x) {
            right--;
        }
        else {
            std::cout << array[left] << " + " << array[right] << " = " << x << std::endl;
            left++;
            right--;
        }

    }

    return 0;
}