#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,min1,min2,min3,min4,min5,Minimum,s,t;
printf("\nEnter seven numbers ");
scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
printf("\n\nprompted numbers by user are - %d  %d  %d  %d  %d  %d  %d",a,b,c,d,e,f,g);

min1=a<b?a:b;
min2=(a<b?a:b)<c?(a<b?a:b):c;
min3=min2<d?min2:d;
min4=e<f?e:f;
min5=(e<f?e:f)<g ? (e<f?e:f) : g ;
Minimum=min3<min5?min3:min5;
printf("\n Minimum value of first two numbers is %d ",min1);
printf("\n Minimum value of first three numbers is %d",min2);
printf("\n Minimum value of first four numbers is %d",min3);
printf("\n Minimum value of last three numbers is %d",min5);

printf("\n\n *Minimum value of all numbers  is : %d* ",Minimum);
return 0;
}
