// Prefix Sums.

#include <iostream>

void getsum(int prefix[], int l, int r) {

    int result;

    if (l > 4 || r > 4) {
        std::cout << "Invalid Index." << std::endl;
    }

    if (l == 0) {
        result = prefix[r];
    }
    else {
        result = prefix[r] - prefix[l - 1];
    }

    std::cout << "Sum from index " << l << " to " << r << " is " << result << std::endl;

}

int main() {

    int size = 5;

    int array[size] = {10, 20, 30, 40, 50};
    int prefix[size];

    prefix[0] = array[0];
    for (int i = 1; i < size; i++) {

        prefix[i] = prefix[i - 1] + array[i];

    }

    int l = 2, r = 4;
    getsum(prefix, l, r);

    return 0;
}

// Use extra memory to save time.