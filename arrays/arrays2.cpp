#include <iostream>

int main() {

    int size = 5;
    int array[size] = {10, 20, 30, 40, 50};

    int left = 0;
    int right = size - 1;
    int x;
    while(left < right) {

        x = array[left];
        array[left] = array[right];
        array[right] = x;

        left++;
        right--;

    }

    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;

    }

    return 0;

}
