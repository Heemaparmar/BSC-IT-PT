//fehrenheit

#include<stdio.h>
#include<conio.h>
void main()
{
float fehrenheit,celcius;
clrscr();
printf("Enter temp in c:");
scanf("%f",&celcius);
fehrenheit=(celcius*9/5)+32;
printf("\n Temp=%.2f",fehrenheit);
getch();
}