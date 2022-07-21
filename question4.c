#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter first natural number for squares sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of square of first %d natural number is %d",n,sum);
    return 0;
}