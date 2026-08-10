#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num, result;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = factorial(num);

    // Display result
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}