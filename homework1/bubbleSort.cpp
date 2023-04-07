#include <iostream>
#include <vector>
#include <iterator>

void bubbleSort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size() - i - 1; ++j) {
            if (vec[j + 1] < vec[j]) {
                std::swap(vec[j + 1], vec[j]);
            }
        }
    }
}