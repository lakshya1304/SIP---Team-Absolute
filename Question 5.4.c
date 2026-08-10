#include <stdio.h>

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2, result;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Check for division by zero
    if (num2 == 0)
    {
        printf("Division by zero is not possible.\n");
    }
    else
    {
        // Function call
        result = divide(num1, num2);

        // Display result
        printf("Quotient = %.2f\n", result);
    }

    return 0;
}