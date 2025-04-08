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

