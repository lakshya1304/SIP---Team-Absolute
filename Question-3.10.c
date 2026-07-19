#include<stdio.h>
int main()
{
    int i,j,space;
    printf("Right Triangle:\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    printf("\nInverted Right Triangle:\n");
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
        printf("\nPyramid:\n");
    for(i = 1; i <= 5; i++) 
    {
        for(space = 1; space <= 5 - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    printf("\nInverted Pyramid:\n");
    for(i = 5; i >= 1; i--)
     {
        for(space = 1; space <= 5 - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    printf("\nDiamond:\n");
    for(i = 1; i <= 5; i++)
     {
        for(space = 1; space <= 5 - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for(i = 4; i >= 1; i--) {
        for(space = 1; space <= 5 - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}