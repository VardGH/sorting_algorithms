## Insertion Sort

Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It divides the input list into a sorted and an unsorted part. The algorithm iterates through the unsorted part, comparing each element to the elements in the sorted part, and inserts the element into its correct position in the sorted part. This process is continued until the entire list is sorted.

## Implementation

The Insertion Sort algorithm is implemented in the `insertion_sort.hpp` header file. The function `insertion_sort` takes a reference to a generic vector and sorts it in ascending order.

## How to Use

1. Include the `insertion_sort.hpp` header in your C++ project.

2. Use the `insertion_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "insertion_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       insertion_sort(my_vector);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

## Performance

Insertion Sort has a time complexity of O(n^2) in its worst and average cases, making it inefficient for large datasets. It performs better than Bubble Sort and Selection Sort for small lists, but for larger lists, consider using more efficient sorting algorithms like Merge Sort, Quick Sort, or Heap Sort.