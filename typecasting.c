#include<stdio.h>
int main()
{
char ch1,ch2;
int n,i,j;
printf("\nEnter first and last letter of your name");
scanf("%c %c",&ch1,&ch2);

i=ch1;
j=ch2;
n=i+j;
printf("Lucky number for you is %d",n);
return 0;
}
