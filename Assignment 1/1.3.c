#include <stdio.h>

int main() {
    float length, width, radius;
    float rectangleArea, circleArea;

    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate rectangle area
    rectangleArea = length * width;

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate circle area
    circleArea = 3.14159 * radius * radius;

    // Display results
    printf("\nArea of Rectangle = %.2f\n", rectangleArea);
    printf("Area of Circle = %.2f\n", circleArea);

    return 0;
}