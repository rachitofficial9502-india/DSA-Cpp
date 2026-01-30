/* 
Painter’s Partition Problem (Simplified)

You are given:
An array boards[] where boards[i] is the length of the i-th board
An integer k = number of painters

Rules:
Each painter paints contiguous boards
Each painter paints at the same speed
A board cannot be split
All painters work in parallel

Goal:
Find the minimum time required to paint all boards. */

#include <iostream>

bool canPaint(int boards[], int mid, int size, int k) {

    int painter = 1;
    int painting = 0;

    for (int i = 0; i < size; i++) {

        if (boards[i] > mid) {
            return false;
        }

        if (boards[i] + painting <= mid) {
            painting += boards[i];

        }
        else {
            painting = boards[i];
            painter++;

            if (painter > k) {
                return false;
            }
        }

    }

    return true;

}

int main() {

    int size = 4;
    int boards[size] = {10, 20, 30, 40};
    int k = 2;

    int low = 0, high = 0, mid, result;

    for (int i = 0; i < size; i++) {
        low = std::max(low, boards[i]);
        high += boards[i];
    }

    while (low <= high) {

        mid = low + (high - low) / 2;

        if (canPaint(boards, mid, size, k)) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

    std::cout << "Minimum time needed is : " << result << std::endl;

    return 0;

}
