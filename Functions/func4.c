//to demonstrate functions without parameters and with return values.
#include <stdio.h>

int sum(); // Function declaration

int main() // Use int main instead of void main
{
    int c; // Variable to store the returned sum
    c = sum(); // Call the sum function
    printf("Sum = %d\n", c); // Display the sum
    return 0; // Return statement for main
}

int sum() // Function definition
{
    int a, b, c; // Variables for input and result
    printf("Enter the values of a and b: "); // Prompt for input
    scanf("%d%d", &a, &b); // Read input values
    c = a + b; // Calculate sum
    return c; // Return the sum to the caller
}
