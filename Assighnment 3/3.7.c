#include <stdio.h>

int main() {
    int num, original, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (original == sum) {
        printf("The number is an Armstrong number");
    }
    else {
        printf("The number is not an Armstrong number");
    }

    return 0;
}