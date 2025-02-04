#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // Prompt user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the formula: π * r²
    area = PI * radius * radius;

    // Print the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}