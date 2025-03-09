#include <stdio.h>


int n, i, key, found = 0;
int main() {

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
// Declaring the array of size 'n'
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    //search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
