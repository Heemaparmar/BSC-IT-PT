//program for accepting 10 mun & find total

#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,total=0;
clrscr();
for(i=1;i<=10;i++)
{
printf("enter number%d:",i);
scanf("%d",&num);
total=total+num;
}
printf("total=%d",total);
getch();
}
