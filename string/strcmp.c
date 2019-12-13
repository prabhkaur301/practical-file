#include<stdio.h>
#include<string.h>
int main()
{
char s1[10],s2[10],s3,s4[10];
printf("Enter a string");
gets(s1);
puts(s1);

s3=strrev(s1);
printf("comparisonof strings give %d",s3);
return 0;
}
