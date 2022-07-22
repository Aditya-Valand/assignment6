#include<stdio.h>
int main()
{
    int i,n,count_digit=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        n=n/10;
        count_digit++;
    }
    printf("the digit of given number is %d",count_digit);

}