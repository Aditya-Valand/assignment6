#include<stdio.h>
int main()
{
    int i,n,factorial=1,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
      factorial=factorial*i;
    }
    printf("factorial of %d is  %d",n,factorial);
}
