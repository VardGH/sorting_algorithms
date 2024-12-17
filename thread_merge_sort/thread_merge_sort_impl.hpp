#ifndef THREAD_MERGE_SORT_IMPL_HPP
#define THREAD_MERGE_SORT_IMPL_HPP

#include <thread>
#include <vector>

template <typename T>
void merge(std::vector<T>& vec, int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;

    std::vector<T> left_part(size1);
    std::vector<T> right_part(size2);

    for (int i = 0; i < size1; ++i) {
        left_part[i] = vec[start + i];
    }

    for (int i = 0; i < size2; ++i) {
        right_part[i] = vec[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < size1 && j < size2) {
        if (left_part[i] < right_part[j]) {
            vec[k++] = left_part[i++];
        } else {
            vec[k++] = right_part[j++];
        }
    }

    while (i < size1) {
        vec[k++] = left_part[i++];
    }

    while (j < size2) {
        vec[k++] = right_part[j++];
    }
}

template <typename T>
void thread_merge_sort(std::vector<T>& vec, int start, int end)
{
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Create threads
    std::thread left_thread([&]() {
        thread_merge_sort(vec, start, mid);
    });
    std::thread right_thread([&]() {
        thread_merge_sort(vec, mid + 1, end);
    });

    // Wait for thread to finsh
    left_thread.join();
    right_thread.join();

    merge(vec, start, mid, end);
}

#endif // THREAD_MERGE_SORT_IMPL_HPP