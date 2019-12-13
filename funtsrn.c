#include<stdio.h>
int main()
{
int a,b,c;
void square(int c);
printf("\nEnter two numbers");
scanf("%d %d",&a,&b);
c=a+b;
square(c);
return 0;
}
void square(int s)
{

int square;
square=s*s;
printf("%d",square);
}
