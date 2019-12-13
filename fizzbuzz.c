#include<stdio.h>
int main()
{
int i,n;
printf("\nEnter  the last digit of series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%15==0)
printf("\nFizz buzz");
else if(i%3==0)
printf("\nfizz");
else if(i%5==0)
printf("\nBuzz");
else
printf("\n%d",i);
}
return 0;

}
