#include<stdio.h>
int main()
{
int n,m;
printf("Enter no.of rows and columns");
scanf("%d %d",&n,&m);

for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{
if(j>=i&&j<=(m+1)-i)
printf("$");
else
printf(".");
}
printf("\n");}
return 0;
}
