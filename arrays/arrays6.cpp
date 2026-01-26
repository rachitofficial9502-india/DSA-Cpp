// check number of duplicates and also those who didnt appeared again.

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {22, 27, 35, 32, 14, 22, 35, 27, 22, 19};

    int x = 22;
    int duplicate = 0;
    for (int i = 0; i < size; i++) {

        if (array[i] == x) {
            duplicate += 1;
        }

    }

    if (duplicate > 0) {
        std::cout << x << " appeared " << duplicate << " times." << std::endl; 
    }
    else {
        std::cout << x << " didn't appeared in the array." << std::endl;
    }

    return 0;

}