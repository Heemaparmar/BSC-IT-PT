// to print 200 , 198 to 180

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
for(a=200;a>=180;a=a-2)
{
printf("\n%d",a);
}
getch();
}