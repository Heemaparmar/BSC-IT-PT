//programee to print multiplication tablee by inputted number

#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("Enter number:");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
printf("\n%d*%d=%d",num,i,num*i);
}
getch();
}