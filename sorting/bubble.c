
#include<stdio.h>

int main()
{
int array[20]={2,4,9,6,8},n=5,temp;
for(int round=0;round<=n-1;round++)
{
  for(int i=0;i<=n-1-round;i++)
   {

     if(array[i]>array[i+1])
       {
        temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;}
}
}
for(int i=0;i<=4;i++)
printf("%d",array[i]);
       
return 0;
}
