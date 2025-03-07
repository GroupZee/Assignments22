#include <stdio.h>

int main() {
    int upper_bond = -1;  // Initial value of upper_bond
    int val;             // Variable to store the value to be inserted
    int a[100];

    printf("Enter the value to be inserted: ");
    scanf("%d", &val);  // Take input for the value to be inserted

    // Increment upper_bond
    upper_bond = upper_bond + 1;

    // Assign the value to the array at the updated index
    a[upper_bond] = val;

    // Display the result
    printf("Value %d has been inserted at a[%d].\n", val, upper_bond);

    return 0;
}
