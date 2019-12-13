
//program for the addition of two matrices\\
#include<stdio.h>



int main()
{
int a1[2][2],a2[2][2],a3[2][2],rows,column;     //order of matrix can be changed by changing the size of array\\



printf("enter the values  of matrice a1");
for(rows=0;rows<=1;rows++)        //order of matrix depends upon size of array and for loops\\

for(column=0;column<=1;column++)
scanf("%d",&a1[rows][column]);

printf("enter the values of matrice2");
for(rows=0;rows<=1;rows++)

for(column=0;column<=1;column++)
scanf("%d",&a2[rows][column]);

for(rows=0;rows<=1;rows++)
{
for(column=0;column<=1;column++)
{

a3[rows][column]=a1[rows][column]+a2[rows][column];


printf(" %d " ,a3[rows][column]);  }
printf("\n");}
return 0;
}
