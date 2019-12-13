#include<stdio.h>
int main()
{
int a[100][100],b[100][100],c[100][100],n,sum;
printf("Enter the size of array");
scanf("%d",&n);
printf("Size of array is %dx%d",n,n);
printf("\nEnter values for first matrix:\n");
for(int i=0;i<=n-1;i++)
{
for(int j=0;j<=n-1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nEnter values for second matrix:\n");
for(int i=0;i<=n-1;i++)
{
for(int j=0;j<=n-1;j++)
{
scanf("%d",&b[i][j]);
}
}

for(int i=0;i<=n-1;i++)
{
for(int j=0;j<=n-1;j++)
{sum=0;
for(int k=0;k<=n-1;k++)
{

sum=sum+a[i][k]*b[k][j];
c[i][j]=sum;

}
}}
printf("\nMatrix multiplication of two matrix is :\n");
for(int i=0;i<=n-1;i++)
{
for(int j=0;j<=n-1;j++)
{
printf("%d\t",c[i][j]);

}printf("\n");

}
return 0;
}
