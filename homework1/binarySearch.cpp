#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& vec, int key) {
    int begin = 0;
    int end = vec.size() - 1;
    while (begin <= end) {
        int mid = begin + (end - begin) / 2;
        if (vec[mid] == key) {
            return mid;
        }
        if (vec[mid] < key) {
            begin = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(const std::vector<int>& vec, int begin, int end, int key) {
    if (begin <= end) {
        int mid = begin + (end - begin) / 2;
        if (vec[mid] == key) {
            return mid;
        }
        if (vec[mid] < key) {
            return binarySearchRecursive(vec, mid + 1, end, key);
        } else {
            return binarySearchRecursive(vec, begin, mid - 1, key);
        }
    }
    return -1;
}