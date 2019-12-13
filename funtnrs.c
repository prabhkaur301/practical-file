#include<stdio.h>
int main()
{
int add();
int s;
s=add();
printf("%d",s*s);

return 0;
}
int add()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
