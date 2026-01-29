// Ship Packages in D Days.
// You are given:
// A list of package weights, weights = [3, 2, 2, 4, 1, 4]
// A number of days, D = 3
// Rules:
// You ship packages in order
// You can’t split a package
// Each day, the ship has a fixed capacity C
// Packages are loaded until capacity is full, then next day starts

#include <iostream>

bool canShip(int weight[], int n, int d, int cap) {

    int days = 1;
    int load = 0;

    for (int i = 0; i < n; i++) {

        if (load + weight[i] > cap) {
            days++;
            load = weight[i];
        }
        else {
            load += weight[i];
        }

    }

    return days <= d;
}

int main() {

    int days = 3;
    int size = 6;
    int weights[size] = {3, 2, 2, 4, 1, 4};

    int low = 0, high = 0, mid;

    for (int i = 0; i < days; i++) {

        low = std::max(low, weights[i]);
        high += weights[i];

    }

    int result = high;

    while (low <= high)
    {
        
        mid = low + (high - low) / 2;

        if (canShip(weights, size, days, mid)) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

    std::cout << "Minumun Capacity needed : " << result << std::endl;

    return 0;
}