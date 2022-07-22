#include<stdio.h>
int main()
{
    int i,n,a,factorial;
    printf("Enter a number: ");
    scanf("%d",&n);
    factorial=n;
    for(i=1;i<n;i++)
    {
      factorial=factorial*i;
    }
    printf("factorial of %d is  %d",n,factorial);
}
