## Counting Sort

The Counting Sort algorithm is implemented in the `counting_sort.hpp` header file. The function `counting_sort` takes a reference to a generic vector and sorts the vector using the Counting Sort method.

## How to Use

1. Include the `counting_sort.hpp` header in your C++ project.

2. Use the `counting_sort` function to sort a vector of your desired type.

   ```cpp
   #include <vector>
   #include "counting_sort.hpp"

   int main()
   {
       std::vector<int> my_vector {4, 2, 1, 5, 3};
       counting_sort(my_vector);
       // Now my_vector is sorted in ascending order.
       return 0;
   }
   ```

## Test Function

The repository also includes a test function for the Counting Sort algorithm in the `test_counting_sort.hpp` header file. This function tests the `counting_sort` function with various scenarios to ensure it works correctly.

```cpp
#include "test_counting_sort.hpp"

int main()
{
    test_counting_sort();
    return 0;
}
```

## Performance

Counting Sort has a time complexity of O(n + k), where n is the number of elements in the input vector and k is the range of input values. It is efficient for sorting data with a small range of values, but it may not be the best choice for large datasets.