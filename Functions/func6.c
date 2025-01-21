//to demonstrate functions with parameters and return values.

#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() // Use int main instead of void main
{
    int m, n, c; // Variables for input and result

    // Prompt user for input
    printf("Enter values for m and n: ");
    scanf("%d%d", &m, &n); // Read input values

    // Call the sum function and store the result
    c = sum(m, n);

    // Display the result
    printf("Sum = %d\n", c);

    return 0; // Return statement for main
}

// Function definition
int sum(int a, int b)
{
    return a + b; // Return the sum of a and b
}
