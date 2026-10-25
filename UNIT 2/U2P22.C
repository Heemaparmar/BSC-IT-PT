//programme to input x and y to calculate it power values

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i,power=1;
clrscr();
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
for(i=1;i<=y;i++)
{
power=power*x;
}
printf("power=%d",power);
getch();
}