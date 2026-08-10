#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2, result;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = multiply(num1, num2);

    // Display result
    printf("Product = %d\n", result);

    return 0;
}