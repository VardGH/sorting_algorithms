#pragma once

#include <iostream>
#include <vector>

template <typename T>
void merge(std::vector<T>& vec, int left, int mid, int right)
{
    int size1 = mid - left + 1;
    int size2 = right - mid;
    
    std::vector<T> left_part(size1);
    std::vector<T> right_part(size2);

    for (int i = 0; i < size1; ++i) {
        left_part[i] = vec[left + i];
    }

    for (int i = 0; i < size2; ++i) {
        right_part[i] = vec[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < size1 && j < size2) {
        if (left_part[i] < right_part[j]) {
            vec[k++] = left_part[i++];
        } else {
            vec[k++] = right_part[j++];
        }
    }

    while (i < size1) {
        vec[k++] = left_part[i++];
    }

    while(j < size2) {
        vec[k++] = right_part[j++];
    }
}

template <typename T>
void merge_sort(std::vector<T>& vec, int begin, int end)
{
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        merge_sort(vec, begin, mid);
        merge_sort(vec, mid + 1, end);
        merge(vec, begin, mid, end);
    }
}

template <typename T>
void print_vector(const std::vector<T>& vec)
{
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}