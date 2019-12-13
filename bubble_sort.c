#include<stdio.h>
int main()

{
int array[10],k,t;
void bubble_sort(int array[],int);
printf("Enter 10 numbers");
for(int i=0;i<=9;i++)
scanf("%d",&array[i]);
bubble_sort(array,10);
for(int m=0;m<=9;m++)
printf(" %d ",array[m]);

return 0;
}
void bubble_sort(int A[],int si)
{
int temp;
for(int round=0;round<=si-1;round++)
{
for(int i=0;i<=si-1-round;i++)
{
if(A[i]>A[i+1]){

temp=A[i];
A[i]=A[i+1];
A[i+1]=temp;}

}
}
} 
