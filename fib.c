#include<stdio.h>
int fib(n)
{

    if(n==0||n<2)
        return n;
        
else
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int num,i;
    printf("Enter the number of series");
    scanf("%d",&num);
    printf("Fibonacci series is :  ");
    for(i=0;i<=num;i++)
        printf("%d\t",fib(i));
    return 0;
    }

