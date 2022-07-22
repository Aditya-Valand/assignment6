#include<stdio.h>
int main()
{
    int i,n,sum=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      a=i*i;
      sum=sum+a;
    }
    printf("Sum of n square number is %d",sum);
}
