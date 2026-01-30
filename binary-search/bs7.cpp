// Question: Minimum Days to Make Bouquets

// You are given:
// An array bloomDay[] where bloomDay[i] is the day the i-th flower blooms
// Two integers m and k
// Rules:
// To make one bouquet, you need k adjacent flowers that have bloomed
// A flower bloomed on day d can be used on day ≥ d
// Each flower can be used only once

// Find the minimum day D such that it is possible to make at least m bouquets.
// If it is impossible, return -1.

#include <iostream>

bool checkBloom(int bloomDay[], int m, int k, int mid, int n) {

    int bouquets = 0;
    int flowers = 0;

    for (int i = 0; i < n; i++) {

        if (bloomDay[i] <= mid) {

            flowers++;

            if (flowers == k) {

                bouquets++;
                flowers = 0;

            }

        }
        else {
            flowers = 0;
        }

    }

    return bouquets >= m;
}

int main() {

    int n = 4;
    int bloomDay[n] = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    int low = bloomDay[0], high = bloomDay[0];
    for (int i = 0; i < n; i++) {
        low = std::min(low, bloomDay[i]);
        high = std::max(high, bloomDay[i]);
    }


    int mid, result = -1;
    while (low <= high)
    {

        mid = low + (high - low) / 2;

        if (checkBloom(bloomDay, m, k, mid, n)) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    
    std::cout << "Minimum days are : " << result << std::endl;

    return 0;
}