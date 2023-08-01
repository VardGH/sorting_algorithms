#include "test_bubble_sort.hpp"

void test_bubble_sort()
{
    // Test case 1: Sorting integers
    std::vector<int> int_vec {4, 8, 7, 6, 9, 1};
    std::cout << "Before sort: ";
    print_vector(int_vec);
    bubble_sort(int_vec);
    std::cout << "After sort: ";
    print_vector(int_vec);
    std::cout << std::endl;

    // Test case 2: Sorting doubles
    std::vector<double> double_vec {3.14, 2.71, 1.618, 0.707, 2.718};
    std::cout << "Before sort: ";
    print_vector(double_vec);
    bubble_sort(double_vec);
    std::cout << "After sort: ";
    print_vector(double_vec);
    std::cout << std::endl;

    // Test case 3: Sorting characters
    std::vector<char> char_vec {'d', 'c', 'b', 'a', 'e'};
    std::cout << "Before sort: ";
    print_vector(char_vec);
    bubble_sort(char_vec);
    std::cout << "After sort: ";
    print_vector(char_vec);
    std::cout << std::endl;
}