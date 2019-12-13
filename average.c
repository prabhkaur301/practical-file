//this program represents the Average of three numbers by using arithmatic operators\\
#include<stdio.h>
void main()
{

int num1,num2,num3,sum;
float average;
printf("\nEnter the values of three numbers");

scanf("%d %d %d",&num1,&num2,&num3);
sum=num1+num2+num3;
printf("\nSum of three numbers is %d",sum);
average=sum/3.0;
printf("\n\nAverage of three numbers is %f",average);
}
