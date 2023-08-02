#pragma once

#include <iostream>
#include <vector>

template <typename T>
int partition(std::vector<T>& vec, int start, int end)
{
    int i = start - 1;
    int pivod = vec[end];

    for (int j = start; j <= end - 1; ++j) {
        if (vec[j] < pivod) {
            ++i;
            std::swap(vec[i], vec[j]);
        }
    }
    std::swap(vec[i + 1], vec[end]);
    return (i + 1);
}

template <typename T>
void quick_sort(std::vector<T>& vec, int start, int end)
{
    if (start < end) {
        int pi = partition(vec, start, end);

        quick_sort(vec, start, pi - 1);
        quick_sort(vec, pi + 1, end);
    }
}

template <typename T>
void print_vector(std::vector<T>& vec)
{
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}