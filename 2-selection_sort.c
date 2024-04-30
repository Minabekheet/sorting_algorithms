#include <stdio.h>
#include "sort.h"  // Assuming this contains the print_array prototype
#include <stddef.h>  // For size_t

void selection_sort(int *array, size_t size) {
    size_t i, j, smallest;
    int temp;

    if (!array || size < 2)  // Validate input
        return;

    for (i = 0; i < size - 1; i++) {  // Outer loop
        smallest = i;  // Assume current position is the smallest

        for (j = i + 1; j < size; j++) {  // Inner loop to find the smallest element
            if (array[j] < array[smallest]) {
                smallest = j;  // Update smallest index
            }
        }

        if (smallest != i) {  // If smallest is not current index, swap them
            temp = array[i];
            array[i] = array[smallest];
            array[smallest] = temp;

            print_array(array, size);  // Print array after each swap
        }
    }
}
