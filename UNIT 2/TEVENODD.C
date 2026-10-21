//program to find out number is odd or even

#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number:");
scanf("%d",&a)
(a%2==0)? printf("Even"):printf("\n Odd");
getch();
}