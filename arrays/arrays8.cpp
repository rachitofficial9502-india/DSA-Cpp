// no. of duplicates apperaed in an array

#include <iostream>

int main() {

    int size = 10;
    int array[size] = {22, 27, 35, 32, 14, 22, 35, 27, 22, 19};
    bool visited[size] = {false};

    int duplicate;
    for (int i = 0; i < size; i++) {

        if (visited[i]) {
            continue;
        }

        visited[i] = true;
        duplicate = 1;
        for (int j = i + 1; j < size; j++) {

            if (array[i] == array[j]) {
                duplicate++;
                visited[j] = true;
            }

        }

        if (duplicate > 1) {
            std::cout << array[i] << " appeared " << duplicate << " times." << std::endl;
        }

    }

    return 0;
}