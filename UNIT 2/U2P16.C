//profgramme to input rollnumber,marks of 5 subject and find out total % ,result and grade

#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,m4,m5;
float total, percentage;
int Rollno;
clrscr();

printf("enter Rollno:");
scanf("%d",&Rollno);

printf("enter the marks of 5 subject:");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

total=m1+m2+m3+m4+m5;
percentage=total/5;

printf("\n Rollno:%d",Rollno);
printf("\n total:%.2f",total);
printf("\n percentage:%.2f%%",percentage);
if(percentage>=35)
printf("\nResult:Pass");
else
printf("\nResult:Fail");

if(percentage>=75)
printf("\n Grade:Distinction");
else if (percentage>=60)
printf("\n Grade:Frist class");
else if (percentage>=50)
printf("\n Grade:second class");
else if(percentage>=35)
printf("\nGrade:pass class");

else
printf("\nGrade:fail");

getch();
}