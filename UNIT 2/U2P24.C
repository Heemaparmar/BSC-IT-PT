//programme to input number and find out reverse of that number

#include<stdio.h>
#include<conio.h>
void main()
{
int num,digit,reverse=0;
clrscr();
printf("Enter number:");
scanf("%d",&num);
while(num>0)
{
digit=num%10;
reverse=reverse*10+digit;
num=num/10;
}
printf("reverse=%d",reverse);
getch();
}