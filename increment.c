#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
c=a++ + ++a;
d=b-- + --b;
printf("\n\n%d\n%d",c,d);
}
             
