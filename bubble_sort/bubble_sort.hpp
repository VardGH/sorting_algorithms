#include <vector>
#include <iostream>

template <typename T>
void bubble_sort(std::vector<T>& vec)
{
    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = 0; j < vec.size() - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}

template <typename T>
void print_vector(const std::vector<T>& vec)
{
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
