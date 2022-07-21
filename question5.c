#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter first natural number for cube sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("Sum of cube of first %d natural number is %d",n,sum);
    return 0;
}