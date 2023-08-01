#pragma once

#include <iostream>
#include <vector>

template <typename T>
void selection_sort(std::vector<T>& vec)
{
    for (int i = 0; i < vec.size(); ++i) {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[min_index] > vec[j]) {
                min_index = j;
            }
        }
        std::swap(vec[min_index], vec[i]);
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