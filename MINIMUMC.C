#include<stdio.h>
#include<conio.h>
void main ()
{
int amount=0,b=0,c=0,flag1=0,flag2=0;
int coin_of_5 ,coin_of_1;
clrscr();
printf("Enter the amount");
scanf("%d",&amount);
printf("Enter the Number of  5 rupee coin ");
scanf("%d",&b);
printf("Enter the number of 1 rupee coin ");
scanf("%d",&c);
	flag1=b*5;
	flag2=c*amount;
	if(amount<=flag1 && amount<=flag2)
	{
		coin_of_5 = amount/5;
		coin_of_1 = amount%5;
		printf("The Five Rupee Coin Need Is %d \n",coin_of_5);
		printf("The One Rupee Coin Need Is %d \n",coin_of_1);
	}
	else if (amount<=c)
	{
		coin_of_1 = amount/1;
		printf("The One Rupee Needed %d",coin_of_1);
	}
	else
		printf("-1");
getch();
}
