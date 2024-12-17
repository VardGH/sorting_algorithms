#include "thread_merge_sort_impl.hpp"
#include <iostream>
#include <vector>

template <typename T>
void print_vector(const std::vector<T>& vec)
{
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec {3, 7, -9, 0, -4, 23, 90, -14};

    print_vector(vec);
    
    thread_merge_sort(vec, 0, vec.size() - 1);

    print_vector(vec);

    return 0;
}