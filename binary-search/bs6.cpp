// Problem: Minimum Eating Speed
// You are given:
// An array piles[] where each element represents bananas in a pile
// An integer H = total hours available
// Each hour:
// You choose one pile
// You eat k bananas from it
// If the pile has fewer than k, you eat the whole pile
// You cannot eat from multiple piles in one hour

// Find the minimum integer k such that all bananas are eaten within H hours.

#include <iostream>

bool canEat(int piles[], int mid, int size, int hrs) {

    int hour = 1;
    int ate = 0;

    for (int i = 0; i < size; i++) {

        hour += (piles[i] + mid - 1) / mid;

    }

    return hour <= hrs;
}

int main() {

    int size = 4;
    int hrs = 8;
    int piles[size] = {3, 6, 7, 11};

    int k;
    int low, high, mid;

    low = 1; high = 0;
    for (int i = 0; i < size; i++) {
        high = std::max(high, piles[i]);
    }

    while (low <= high)
    {

        mid = low + (high - low) / 2;

        if (canEat(piles, mid, size, hrs)) {
            k = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    
    std::cout << "Minimum k needed : " << k << std::endl;

    return 0;    
}