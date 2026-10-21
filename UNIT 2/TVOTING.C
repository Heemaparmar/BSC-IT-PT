#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter the age:");
scanf("%d",&age);
(age>=18)?printf("eligible for voting"):printf("\n not eligible for voting");
getch();
}
