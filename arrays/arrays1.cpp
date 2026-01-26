#include <iostream>

int main() {

    int size = 5;
    int sum = 0;
    int max;

    int array[size] = {10, 20, 30, 40, 50};

    max = array[0];
    for (int i = 0; i < size; i++) {

        if (max < array[i]) {
            max = array[i];
        }

        sum += array[i];
        std::cout << array[i] << std::endl;

    }

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Max = " << max << std::endl;

    return 0;

}
