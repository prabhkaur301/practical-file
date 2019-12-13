#include<stdio.h>
int main()
{

for(int i=1;i<=4;i++)
{
for(int j=1;j<=5;j++)
{
if(j>=i&&j<=6-i)
printf("1");
else
printf("0");

}
printf("\n");
}
return 0;
}

