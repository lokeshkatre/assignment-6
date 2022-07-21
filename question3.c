#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter first odd number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i-1);
    }
    printf("The sum of first %d odd natural numbers are %d",n,sum);
    return 0;
}