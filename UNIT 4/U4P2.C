#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int MyNumber[5];
printf("Enter the elements of an array:\n");
for(i=0;i<5;i++)
{
 scanf("%d",&MyNumber[i]);
}
printf("elements of array are:\n");
for(i=0;i<5;i++)
{
printf("%d",MyNumber[i]);
}
getch();
return 0;
}
