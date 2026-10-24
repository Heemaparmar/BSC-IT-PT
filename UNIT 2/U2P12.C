//program to input two values from user & check wheather the first number is divisible by second or not

#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("enter first number");
scanf("%d",&num1);
printf("enter second number");
scanf("%d",&num2);
if(num1%num2==0)
printf("%d is divisible by %d",num1,num2);
else
printf("%d is not divisible by %d",num1,num2);
getch();
}