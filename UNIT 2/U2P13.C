// programme to input price quatity of an item from user and display final payment acc to condition if total purchase (price*quantity) is grater than 1000 then calculate discount 15% otherwise calculate discount 10% of total rupee

#include<stdio.h>
#include<conio.h>
void main()
{
float price,total,discount,final_payment;
int quantity;
clrscr();
printf("enter price");
scanf("%f",&price);
printf("enter quantity");
scanf("%d",&quantity);
total=price*quantity;
if(total>1000)
discount=total*0.15;
else
discount=total*0.10;
final_payment=total-discount;
printf("\ntotal purchase=%.2f",total);
printf("\ndiscount=%.2f",discount);
printf("\nfinal_payment=%.2f",final_payment);
getch();
}