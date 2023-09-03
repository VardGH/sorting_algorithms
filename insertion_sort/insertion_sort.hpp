#pragma once

#include <iostream>
#include <vector>

template <typename T>
void insertion_sort(std::vector<T>& vec)
{
    for (int i = 1; i < vec.size(); ++i) {
        T key = vec[i];
        int j = i - 1;

        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            --j;
        }
        vec[j + 1] = k;
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
