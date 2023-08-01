## Bubble Sort

The Bubble Sort algorithm is implemented in the `bubble_sort.hpp` header file. It sorts a generic vector in ascending order using the Bubble Sort method.

## Test Function

The test function for the Bubble Sort algorithm is included in the `test_bubble_sort.hpp` header file. It tests the `bubble_sort` function with various scenarios to ensure it works correctly.

## How to Use

1. Include the `bubble_sort.hpp` header in your C++ project.

2. Use the `bubble_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "bubble_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       bubble_sort(my_vector);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

3. To test the Bubble Sort algorithm, include the `test_bubble_sort.hpp` header and call the `test_bubble_sort()` function from your `main` function.

   ```cpp
   #include "test_bubble_sort.hpp"

   int main()
   {
       test_bubble_sort();
       return 0;
   }
   ```

## Performance

Bubble Sort has a time complexity of O(n^2) in its worst and average cases, making it inefficient for large datasets. For large lists, consider using more efficient sorting algorithms like Merge Sort, Quick Sort, or Heap Sort.