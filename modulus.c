#include<stdio.h>
void main()
{
int s,p;
printf("Enter the number to check the divisibility by 3");
scanf("%d",&s);
p=s%3;

printf("\n%d\n",p);
if(p==0)
{
printf("\n\nNumber is divisible by 3");
}
else
printf("\n\nNumber is not divisible by 3");
return 0;
}
