#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>

void swap(int* element1Ptr, int* element2Ptr) {
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
}

bool ascending(int a, int b) {
    return a > b;
}

bool descending(int a, int b) {
    return a < b;
}

