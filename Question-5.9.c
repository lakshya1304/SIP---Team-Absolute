#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
{
    int original, remainder, digits = 0;
    int sum = 0;
    original = num;
    while (original != 0)
    {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0)
    {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
