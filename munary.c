#include<stdio.h>
void main()
{
int s,p;
printf("Enter any two numbers");
scanf("%d %d",&s,&p);
s=s-- + --p* s++ - p++;
printf("\nValue is %d",s);
}

