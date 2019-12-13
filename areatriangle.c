#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b,c;double Area;
float s,t;
printf("\n\nEnter the size of sides of triangle");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2.0;
b=s*(s-a)*(s-b)*(s-c);
Area=sqrt(b);
printf("\n\nArea of triangle is %lf\n",Area);
return 0;
}
