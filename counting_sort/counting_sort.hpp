#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void counting_sort(std::vector<T>& vec)
{
    if (vec.empty()) {
        return;
    }

    // Find the maximum element in the array to determine the range of counting array.
    T max = *std::max_element(vec.begin(), vec.end());
    
    // Create a counting array with the size of (max_element + 1) and initialize all elements to 0.
    std::vector<T> counting_array(max + 1, 0);

    // Count the occurrences of each element in the original array and store them in the counting array.
    for (const T& elem : vec) {
        counting_array[elem]++;
    }

    // Calculate the cumulative sum of the counting array.
    for (int i = 0; i < counting_array.size(); ++i) {
        counting_array[i] += counting_array[i - 1];
    }

    // Create a temporary output array to store the sorted elements.
    std::vector<T> output_arr(vec.size());

    // Iterate through the original array in reverse order to maintain stability.
    for (int i = vec.size() - 1; i >= 0; --i) {
        output_arr[counting_array[vec[i]] - 1] = vec[i];
        counting_array[vec[i]]--;
    }
    
    // Copy the sorted elements back to the original array.
    vec = std::move(output_arr);
}

template <typename T>
void print_vector(const std::vector<T>& vec)
{
    for (auto elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}