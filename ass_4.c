#include <stdio.h>
#include <math.h> // For the M_PI constant

int main() {
    double radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = M_PI * radius * radius;

    // Print the result in the specified format
    printf("Area of circle is %.2f having the radius %.2f\n", area, radius);

    return 0;
}
