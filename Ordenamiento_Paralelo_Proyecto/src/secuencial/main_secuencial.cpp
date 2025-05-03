#include <iostream>
#include <vector>
#include "../utils/array_generator.h"
#include "../utils/timer.h"
#include "../utils/validation.h"
#include "mergesort.cpp"
#include "quicksort.cpp"

int main() {
    int size = 10000;  // Example array size
    std::vector<int> arr = generateRandomArray(size);

    // Test MergeSort
    std::vector<int> mergeArr = arr;
    Timer t;
    mergeSort(mergeArr);
    double mergeTime = t.elapsed();
    std::cout << "MergeSort Time: " << mergeTime << " seconds\n";
    if (isSorted(mergeArr)) {
        std::cout << "MergeSort: Sorted correctly\n";
    } else {
        std::cout << "MergeSort: Error in sorting\n";
    }

    // Test QuickSort
    std::vector<int> quickArr = arr;
    t.reset();
    quickSort(quickArr);
    double quickTime = t.elapsed();
    std::cout << "QuickSort Time: " << quickTime << " seconds\n";
    if (isSorted(quickArr)) {
        std::cout << "QuickSort: Sorted correctly\n";
    } else {
        std::cout << "QuickSort: Error in sorting\n";
    }

    return 0;
}
