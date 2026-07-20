#include <stdio.h>

int main() {
    int start, end, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if (i % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nTotal Even Numbers = %d", evenCount);
    printf("\nTotal Odd Numbers = %d", oddCount);

    return 0;
}