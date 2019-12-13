#include<stdio.h>
int main()
{
int n,p=1;
printf("\nEnter a number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
p=p*i;
}
printf("\nFactorial of %d  is %d\n\n",n,p);
return 0;
}
