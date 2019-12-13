#include<stdio.h>
int main()
{
int a=-1,b=1,c,n;
printf("\nEnter the size of fibonacci series : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("    %d  ",c);
}
return 0;
}
