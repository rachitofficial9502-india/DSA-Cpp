// Finding x in an array using Binary Search.

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {2, 4, 7, 9, 11, 13, 16, 19, 20, 21};

    int x = 7;

    int low = 0;
    int high = size - 1;
    int mid;
    bool found = false;
    while (low <= high) {

        mid = (low + high) / 2;
        if (x == array[mid]) {
            std::cout << "Found at index " << mid << std::endl;
            found = true;
            break;
        }
        else if (x > array[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

    }

    if (!found) {
        std::cout << "Not Found." << std::endl;
    }

    return 0;
}