## Quick Sort

The Quick Sort algorithm is implemented in the `quick_sort.hpp` header file. The function `quick_sort` takes a reference to a generic vector, along with the starting and ending indices, and sorts the vector using the Quick Sort method.

## Partition Function

The partitioning of the vector in the Quick Sort algorithm is performed by the `partition` function. It is also defined in the `quick_sort.hpp` header file.

## How to Use

1. Include the `quick_sort.hpp` header in your C++ project.

2. Use the `quick_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "quick_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       quick_sort(my_vector, 0, my_vector.size() - 1);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

## Test Function

The repository also includes a test function for the Quick Sort algorithm in the `test_quick_sort.hpp` header file. This function tests the `quick_sort` function with various scenarios to ensure it works correctly.

```cpp
#include "test_quick_sort.hpp"

int main()
{
    test_quick_sort();
    return 0;
}
```

## Performance

Quick Sort has an average time complexity of O(n log n) in the average and best cases, making it a highly efficient sorting algorithm. However, in the worst case, the time complexity can be O(n^2) if the pivot selection is not optimized. For most datasets, Quick Sort performs very well and is widely used in practice.