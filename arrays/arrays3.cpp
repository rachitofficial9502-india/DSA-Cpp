#include <iostream>

int main() {

    int size = 5;
    int array[size] = {22, 27, 35, 11, 67};

    int min = array[0];
    for (int i = 1; i < size; i++) {

        if (min > array[i]) {
            min = array[i];
        }

    }

    std::cout << "Min: " << min << std::endl;

    return 0;

}
