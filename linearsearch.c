#include<stdio.h>
int main()
{
int Array[10],s;
printf("Enter one digit ten numbers");
for(int i=0;i<=9;i++)
{
scanf("%d",&Array[i]);
}
printf("Enter required search element");
scanf("%d",&s);
for(int j=0;j<=9;j++)
{

if(Array[j]==s)
          {
printf("\nSearch element is   found\n");
}                              

}

return 0;
}

