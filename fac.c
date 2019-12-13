#include<stdio.h>
int fac(int n)
{
int faco;
if(n==0||n<2)
return n;
else
faco=fac(n-1)*n;
return faco;
}
int main()
{
int num;
printf("\nEnter the number of factorial:");
scanf("%d",&num);
printf("\nFactorial of number is : %d",fac(num));
return 0;
}
