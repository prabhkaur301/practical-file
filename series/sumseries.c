#include<stdio.h>
int main()
{
int n,i,sum=0;

printf("\nEnter the desired value of n = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("\nsum of first %d terms = %d \n",n,sum);
return 0;
}
