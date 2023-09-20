#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; // Value not present or invalid input
    }

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++) {
            if (i != left) {
                printf(", ");
            }
            printf("%d", array[i]);
        }
        printf("\n");

        int mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return mid; // Found the target at index mid
        }
        if (array[mid] < value) {
            left = mid + 1; // Adjust the left boundary
        } else {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // Value not found in the array
}
