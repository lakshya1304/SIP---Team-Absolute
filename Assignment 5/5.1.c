#include <stdio.h>

int add(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

int main() {
    int num1, num2, result;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = add(num1, num2);

    // Display result
    printf("Sum = %d\n", result);

    return 0;
}