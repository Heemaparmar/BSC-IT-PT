//interchange the value of two numbers using third variable
#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,a;
 printf("Enter frist number:");
 scanf("%d",&num1);
 printf("Enter second number:");
 scanf("%d",&num2);

 a=num1;
 num1=num2;
 num2=a;

 printf("\nAfter swapping");
 printf("\nfrist number=%d",num1);
 printf("\nsecond number=%d",num2);

 getch();

}
