#include<stdio.h>
int main()
{
    int i,n,num,r,sum=0;
    printf("Enter a number");
    scanf("%d,&num");
    printf("\nArmstrong Number are:\n");
    for(i=1;i<=num;i++)
    {
        Sum=0;
        n=i;
        while(n  !=0)
        {
            r = n % 10;
            Sum= Sum + (r*r*r);
            n=n/10;
        }
        if(num==sum)
        {
            printf("%d is a Armstrong number.")
        }
        return 0;
    }    

    
    
