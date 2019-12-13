#include<stdio.h>
#include<stdlib.h>
struct marriage_bureau
{
char Name[20];
int age;
char gender[6];
float height;
float weight;
char qualification[20];
};
int  main()
{
struct marriage_bureau p;
FILE *mrptr;
mrptr = (fopen("bureau.txt", "w"));
if(mrptr == NULL)
{
printf("ERROR!");
exit(1);
}


printf("\nEnter the following details");
printf("\nName: ");
scanf("%s",p.Name);
printf("\nage: ");
scanf("%d",&p.age);
printf("\ngender: ");
scanf("%s",p.gender);
printf("\n Height : ");
scanf("%f",&p.height);
printf("\n Weight : ");
scanf("%f",&p.weight);
printf("\n Qualification: ");
scanf("%s",p.qualification);
fprintf(mrptr,"\nName : %s \nAge : %d \nGender : %s \n\
Height : %f \nWeight : %f \nQualification : %s \n\n",p.Name,p.age,p.gender,p.height,p.weight,p.qualification);
 printf("\n\n*THANKS FOR REGISTRATION*\n\n");
return 0; 
}
