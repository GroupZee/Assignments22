#include <stdio.h>

int main() {
    // Declare and initialize an array
    int c[5] = {1,956,45,456,1000000009};


    // Calculate the size of the array using sizeof function
    int size = sizeof(c) / sizeof(c[0]);

    printf("Array elements are:\n");

    // Going through the array
    for (int t = 0; t < size; t++) {
        printf("Element at index %d: %d\n", t, c[t]);
    }


    return 0;
}
