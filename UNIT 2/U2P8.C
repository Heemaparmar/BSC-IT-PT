//programme to find leap year or not

#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter year:");
scanf("%d",&year);
if((year%400==0)||(year%4==0&&year%100!=0))
printf("%d is leap year ",year);
else
printf("%d is not leap year",year);
getch();
}