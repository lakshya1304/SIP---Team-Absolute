#include <stdio.h>
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}
int main()
{
    int base, exponent, result;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);
    printf("%d raised to the power %d = %d\n", base, exponent, result);
    return 0;
}