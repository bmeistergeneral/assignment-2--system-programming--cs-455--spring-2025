#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

// Function to swap two integer elements in an array
void swap(int* element1Ptr, int* element2Ptr) {
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
}
// Comparison function for ascending order
bool ascending(int a, int b) {
    return a > b;
}
// Comparison function for descending order
bool descending(int a, int b) {
    return a < b;
}
// Bubble sort algorithm that takes a function pointer for comparison
// 'array': Pointer to the integer array to be sorted
// 'size': Number of array elements
// 'compare': A pointer to a function that takes two integers and returns a boolean
//            indicating if they are in the wrong order. This allows for flexible sorting.
void bubbleSort(int* array, size_t size, bool (*compare)(int, int)) {
    // Outer loop iterates through the array 'size - 1' times
    for (size_t pass = 1; pass < size; ++pass) {
        // Inner loop compares adjacent elements
        for (size_t j = 0; j < size - pass; ++j) {
            // Call the comparison function pointed to by 'compare'
            if (compare(array[j], array[j + 1])) {
                // If function returns true and elements are in the wrong order, swap them
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

