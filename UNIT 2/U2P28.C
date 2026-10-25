//programe check wheather a number is prime or not

#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,count=0;
clrscr();
printf("Enter number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
count++;
}
if(count==2)
printf("Number is prime");
else
printf("Number is not prime");
getch();
}