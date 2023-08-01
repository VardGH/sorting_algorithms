## Selection Sort

The Selection Sort algorithm is implemented in the `selection_sort.hpp` header file. The function `selection_sort` takes a reference to a generic vector and sorts it in ascending order using the Selection Sort method.

## How to Use

1. Include the `selection_sort.hpp` header in your C++ project.

2. Use the `selection_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "selection_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       selection_sort(my_vector);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

## Test Function

The repository also includes a test function for the Selection Sort algorithm in the `test_selection_sort.hpp` header file. This function tests the `selection_sort` function with various scenarios to ensure it works correctly.

```cpp
#include "test_selection_sort.hpp"

int main()
{
    test_selection_sort();
    return 0;
}
```

## Performance

Selection Sort has a time complexity of O(n^2) in its worst and average cases, making it inefficient for large datasets. For larger lists, consider using more efficient sorting algorithms like Merge Sort, Quick Sort, or Heap Sort.