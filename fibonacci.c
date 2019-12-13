#include<stdio.h>
int main()
{
int n,a=-1,b=1,c;
printf("Enter the size of series");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf(" %d ",c);
}
return 0;
}
