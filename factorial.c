#include<stdio.h>
int main()
{
    int sum,n;
    sum=1;
    printf(" enter natural  number to find its factorial\n ");
    scanf(" %d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("factorial of %d is %d ",n,sum);
    return 0;
}
