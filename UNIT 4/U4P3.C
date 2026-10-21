#include <stdio.h>
#include <conio.h>
int sumofdigit(int n)
{
   int sum=0,num1;
   while(n !=0)
{  num1 = n % 10;
   sum=sum + num1;
   n = n / 10;
}
  return sum;
}

void main()
{
int n,result;
clrscr();
printf("enter number:");
scanf("%d",&n);
result=sumofdigit(n);
printf("sum of digit=%d",result);
getch();
}