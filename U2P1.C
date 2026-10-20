//programme to find out maximum
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
if(num1>num2)
printf("\n Maximum=%d",num1);
else
printf("\n Maximum=%d",num2);
getch();
}
