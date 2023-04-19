#include <iostream>
#include <vector>
#include <iterator>

void merge(std::vector<int>& vec, int begin, int mid, int end) {
    std::vector<int> arr(vec.size());
    int begin1 = begin;
    int end1 = mid;
    int begin2 = mid + 1;
    int end2 = end;
    int idx = begin;
    while (begin1 <= end1 && begin2 <= end2) {
        if (vec[begin1] < vec[begin2]) {
            arr[idx++] = vec[begin1++];
        } else {
            arr[idx++] = vec[begin2++];
        }
    }
    while (begin1 <= end1) {
        arr[idx++] = vec[begin1++];
    }
    while (begin2 <= end2) {
        arr[idx++] = vec[begin2++];
    }
    for (int i = begin; i <= end; ++i) {
        vec[i] = arr[i];
    }
}

void mergeSort(std::vector<int>& vec, int begin, int end) {
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        mergeSort(vec, begin, mid);
        mergeSort(vec, mid + 1, end);
        merge(vec, begin, mid, end);
    }
}