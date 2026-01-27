// right rotation by k using reversal.

#include <iostream>

void reverse(int arr[], int start, int end) {

    int x;

    while (start < end) {

        x = arr[start];
        arr[start] = arr[end];
        arr[end] = x;

        end--;
        start++;

    }

}

int main() {

    int size = 5;
    int array[size] = {10, 20, 30, 40, 50};

    int k = 2;
    k = k % size;
    int d = size - k;

    int x, left, right;

    left = 0;
    right = d - 1;
    reverse(array, left, right);

    left = d;
    right = size - 1;
    reverse(array, left, right);

    left = 0;
    right = size - 1;
    reverse(array, left, right);

    for (int i = 0; i < size; i++) {

        std::cout << array[i] << std::endl;

    }

    return 0;

}

// Right rotation by k = Left rotation by n - k