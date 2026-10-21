//programme for number is equal or not

#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2;
clrscr();
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);
if(num1!=num2)
printf("\n Num is not equal");
else
printf("\n num is equal");
getch();
}