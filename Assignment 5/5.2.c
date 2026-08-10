#include <stdio.h>

int subtract(int a, int b) {
    int result;
    result = a - b;
    return result;
}

int main() {
    int num1, num2, ans;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    ans = subtract(num1, num2);

    // Display result
    printf("Subtraction = %d\n", ans);

    return 0;
}