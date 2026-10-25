//programme to check wheather the num is armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
int num,original,digit,sum=0;
clrscr();
printf("enter number:");
scanf("%d",&num);
original=num;
while(num>0)
{
digit=num%10;
sum=sum+digit*digit*digit;
num=num/10;
}
if(original==sum)
printf("number is armstorng number");
else
printf("number is not armstrong number");
getch();
}