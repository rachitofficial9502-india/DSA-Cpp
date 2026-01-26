// check if a number is in an array.

#include <iostream>

int main() {

    int size = 5;
    int array[size] = {22, 27, 35, 11, 67};

    int x = 35;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (array[i] == x) {
            std::cout << "Found " << x << " at index " << i << std::endl;
            found = true;
            break;
        }

    }

    if (!found) {
        std::cout << "Not found.";
    }

    return 0;

}