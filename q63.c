#include<stdio.h>
int main()
{
    int i,n,sum=0,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    a=n*2;
    for(i=1;i<=a;i+=2)
    {
      sum=sum+i;
    }
    printf("Sum of n Odd number is %d",sum);
}
