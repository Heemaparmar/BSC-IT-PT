//program to find average
#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,i, sum=0;
float avg;
clrscr();
printf("enter number of a element:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
   sum=sum+a[i];
 }
avg=(float)sum/n;
printf("total=%d\n",sum);
printf("average=%.2f\n",avg);
getch();
return 0;
}
