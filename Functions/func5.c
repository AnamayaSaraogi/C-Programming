//to demonstrate functions with parameters and no return values.

#include <stdio.h>

// Function declaration
void sum(int a, int b);

int main() // Use int main instead of void main
{
    int m, n; // Variables for input
    printf("Enter values for m and n: "); // Prompt for input
    scanf("%d%d", &m, &n); // Read input values
    sum(m, n); // Call the sum function
    return 0; // Return statement for main
}

// Function definition
void sum(int a, int b)
{
    int c; // Variable to store the result
    c = a + b; // Calculate sum
    printf("Sum = %d\n", c); // Display the sum
}
