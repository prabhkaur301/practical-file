#include<stdio.h>
int main()
{
int n,factor=0;
printf("enter any number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
factor++;
}
if(factor==2)
printf("number is prime");
else
printf("no is not prime");
return 0;
}
