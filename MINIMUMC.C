#include<stdio.h>
#include<conio.h>
void main ()
{
int amount=0,b=0,c=0;
int coin_of_5 ,coin_of_1;
clrscr();
printf("Enter the amount");
scanf("%d",&amount);
printf("Enter the Number of  5 rupee coin ");
scanf("%d",&b);
printf("Enter the number of 1 rupee coin ");
scanf("%d",&c);
coin_of_5 = amount/5;
coin_of_1 = amount%5;
if (coin5 > b )
	printf("-1");
if (coin1 > c)
	printf("-1");
else
{
	printf("The number of 5 rupee coin need is %d \n",coin_of_5);
	printf("The Number of 1 repee coin need is %d \n",coin_of_1);
}
getch();
}
