#include "test_merge_sort.hpp"

void test_merge_sort()
{
    // Test case 1: Sorting integers
    std::vector<int> int_vec {4, 8, 7, 6, 9, 1};
    std::cout << "Before sort: ";
    print_vector(int_vec);
    merge_sort(int_vec, 0, int_vec.size() - 1);
    std::cout << "After sort: ";
    print_vector(int_vec);
    std::cout << std::endl;

    // Test case 2: Sorting doubles
    std::vector<double> double_vec {3.14, 2.71, 1.618, 0.707, 2.718};
    std::cout << "Before sort: ";
    print_vector(double_vec);
    merge_sort(double_vec, 0, double_vec.size() - 1);
    std::cout << "After sort: ";
    print_vector(double_vec);
    std::cout << std::endl;

    // Test case 3: Sorting characters
    std::vector<char> char_vec {'d', 'c', 'b', 'a', 'e'};
    std::cout << "Before sort: ";
    print_vector(char_vec);
    merge_sort(char_vec, 0 ,char_vec.size() - 1);
    std::cout << "After sort: ";
    print_vector(char_vec);
    std::cout << std::endl;
}