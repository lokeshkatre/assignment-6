#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter first even number for sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("\nThe sum of first %d even numbers are %d",n,sum);
    return 0;
}