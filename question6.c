#include<stdio.h>
int main()
{
    int factorial=1,n;
    printf("Enter number to find factorial: ");
    scanf("%d",&n);
    if(n>=0)
    {
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("%d!= %d",n,factorial);
    } 
    return 0;
}