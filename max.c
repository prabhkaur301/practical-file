#include<stdio.h>
int main()
{
int a,b,c,d,e,min1,min2,min3,min4,min5,Minimum,s,t;
printf("\nEnter five numbers ");
scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
printf("\n\nprompted numbers by user are - %d  %d  %d  %d  %d  %d  %d",a,b,c,d,e,f,g);

min1=a<b?a:b;
min2=(a<b?a:b)<c?(a<b?a:b):c;
min3=min2<d?((a<b?a:b)<c):d;
min4=e<f?e:f;
min5=(e<f?e:f)<g ? (e<f?e:f) : g ;
Minimum=min3<min5?min3:min5;
printf("\n\n Minimum value is : %d ",Minimum);
return 0;
}
