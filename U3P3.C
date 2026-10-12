#include<stdio.h>
#include<conio.h>
int reverse(int n);
int main()
{
int n , result;
clrscr();
printf("Enter number:");
scanf("%d",&n);

result= reverse(n);
printf("reverse=%d", result);
getch();
return 0;
}
int reverse(int n)
{
int digit,rev=0;

while (n!=0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
return rev;
}