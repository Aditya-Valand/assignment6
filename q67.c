#include<stdio.h>
int main()
{
    int i,n,count;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;   
    }
    if(count==2)
    printf("prime number");
    else
    printf("Not a prime number");
    return 0;

}