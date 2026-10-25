// programme to find prime number .....n

#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,j,count;
clrscr();
printf("Enter number:");
scanf("%d",&num);
printf("Prime number are:\n");
for(i=2;i<=num;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d\t",i);
}
getch();
}
