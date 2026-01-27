// left rotation by k.

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {22, 27, 35, 32, 14, 22, 35, 27, 22, 19};
    int k = 2;

    if (k > size) {
        k = k % size;
    }

    int temp[k] = {};
    for (int i = 0; i < k; i++) {

        temp[i] = array[i];

    }

    for (int i = 0; i < size - k; i++) {

         array[i] = array[i + k];

    }

    for (int i = 0; i < k; i++) {

        array[size - k + i] = temp[i];

    }


    std::cout << "New array is = " << std::endl;

    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;

    }

    return 0;

}