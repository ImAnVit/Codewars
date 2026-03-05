#include <stddef.h>

int find_smallest_int(const int array[], size_t len) {
    int smallest = array[0];

    for (size_t i = 1; i < len; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }

    }

    return smallest;
}