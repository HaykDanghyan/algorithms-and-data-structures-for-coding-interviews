#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[minIdx] > vec[j]) {
                minIdx = j;
            }
        }
        std::swap(vec[i], vec[minIdx]);
    }
}