//This program represents the use and\
 priority of different arithmatic operators\\

                                     
#include<stdio.h>
void main()
{
int x,y,a=5,b=9,z;
printf("\n\n This program is designed to illustrate the precedence order of arithmatic operators(+,*,/)");
printf("\n\nEnter two numbers :\n");
scanf("%d%d",&x,&y);
z=a+b*x/y;
printf("%d",z);
}
