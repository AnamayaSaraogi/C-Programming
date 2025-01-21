#include <stdio.h>

// This program demonstrates swapping using call by value.
// The swapping occurs only within the function, and the original variables in main() remain unchanged.

void swap(int, int);

void main() {
    int i, j;

    printf("Enter i and j values: ");
    scanf("%d%d", &i, &j);

    printf("Before swapping: %d %d\n", i, j);

    swap(i, j);

    // The original values of i and j remain unchanged after calling swap().
    printf("After swapping: %d %d\n", i, j);
}

void swap(int a, int b) {
    int temp;

    temp = a;  // Store value of a in temp
    a = b;     // Assign value of b to a
    b = temp;  // Assign value of temp to b

    // This swapping only affects the local copies of the variables, not the original ones.
}
