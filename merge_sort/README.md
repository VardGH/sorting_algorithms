## Merge Sort

The Merge Sort algorithm is implemented in the `merge_sort.hpp` header file. The function `merge_sort` takes a reference to a generic vector, along with the beginning and ending indices, and sorts the vector using the Merge Sort method.

## Merge Function

The merging of two sub-arrays in the Merge Sort algorithm is performed by the `merge` function. It is also defined in the `merge_sort.hpp` header file.

## How to Use

1. Include the `merge_sort.hpp` header in your C++ project.

2. Use the `merge_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "merge_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       merge_sort(my_vector, 0, my_vector.size() - 1);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

## Test Function

The repository also includes a test function for the Merge Sort algorithm in the `test_merge_sort.hpp` header file. This function tests the `merge_sort` function with various scenarios to ensure it works correctly.

```cpp
#include "test_merge_sort.hpp"

int main()
{
    test_merge_sort();
    return 0;
}
```

## Performance

Merge Sort has a time complexity of O(n log n) in all cases, making it more efficient than the quadratic sorting algorithms like Bubble Sort, Selection Sort, and Insertion Sort. Merge Sort is suitable for sorting large datasets efficiently.