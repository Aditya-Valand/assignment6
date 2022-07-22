#include<stdio.h>
int main()
{
   int i,x,r,y=0;
   printf("Enter a number:");
   scanf("%d",&x);
   for(i=1;x!=0;i++)
   {
    r=x%10;
    y=y*10+r;
    x=x/10;
   }
   printf("reverce is %d",y);
}