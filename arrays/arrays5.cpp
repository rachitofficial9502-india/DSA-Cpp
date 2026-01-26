// second max in an array.

#include <iostream>

int main() {

    int size = 5;
    int array[size] = {22, 27, 35, 32, 14};

    int max = array[0];
    int second_max = array[1];

    if (second_max > max) {
        max = second_max;
        second_max = array[0];
    }

    for (int i = 1; i < size; i++) {

        if (max < array[i]) {
            second_max = max;
            max = array[i];
        }

        else if (array[i] < max && array[i] > second_max) {
            second_max = array[i];
        }

    }

    std::cout << "Second max is = " << second_max << std::endl;

    return 0;

}