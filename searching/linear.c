#include<stdio.h>
void search(int s,int k,int a[s])
{

for(int i=0;i<=s-1;i++)
{
if(a[i]==k)
{printf("\nSearch key is found.\nKey is stored in array[%d]",i);
break;}
else
{
printf("\nSearch key is not found!!");}
}
}
int main()
{
int array[100],key,size;
printf("\nEnter the size of array: ");
scanf("%d",&size);
printf("\nEnter the values you want to store :");
for(int j=0;j<=size-1;j++)
scanf("%d",&array[j]);
printf("\nEnter the number you want to search: ");
scanf("%d",&key);
search(array,size,key);
return 0;
}
