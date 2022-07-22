#include<stdio.h>
int main()
{
    int i,n,sum=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n*2;
    for(i=2;i<=a;i+=2)
    {
      sum=sum+i;
    }
    printf("Sum of n Even number is %d",sum);
}
