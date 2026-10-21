#include<stdio.h>
#include<conio.h>
int main()
{
int i,n;
int MyNumber[10];
printf("Enter the elements of an array:\n");
for(i=0;i<n;i++)
{
 scanf("%d",MyNumber[i]);
}
printf("elements of array are:\n");
for(i=0;i<n;i++)
{
printf("%d",MyNumber[i]);
}
getch();
return 0;
}
