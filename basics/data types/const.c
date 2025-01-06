#include <stdio.h>

int main() {
    const float PI = 3.14; // Declare a constant variable
    int radius = 5;       // Declare a regular variable
    float area;

    // Calculate the area of a circle
    area = PI * radius * radius;

    printf("The area of the circle is: %.2f\n", area);

    // Uncommenting the next line will cause an error because PI is constant
    // PI = 3.14159;

    return 0;
}
