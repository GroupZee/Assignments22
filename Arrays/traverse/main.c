#include <stdio.h>

int main() {
    // Declare and initialize an array
    int c[5] = {1,956,45,456,1000000009};


    // Calculate the size of the array
    int size = sizeof(c) / sizeof(c[0]);

    printf("Array elements are:\n");

    // Traversing the array
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, c[i]);
    }

    return 0;
}
