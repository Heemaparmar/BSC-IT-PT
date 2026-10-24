 //programme to find cube and square of number

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Number\t Square\t Cube\t");
for(i=1;i<=10;i++)
{
printf("\n%d\t%d\t%d\t",i,i*i,i*i*i);
}
getch();
}
