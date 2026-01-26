// Left rotation of an array

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {22, 27, 35, 32, 14, 22, 35, 27, 22, 19};

    int temp = array[0];
    for (int i = 0; i < size - 1; i++) {

        array[i] = array[i + 1];

    }
    array[size - 1] = temp;

    std::cout << "New array is = " << std::endl;

    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;

    }

    return 0;

}