#include<stdio.h>
#include<cs50.h>
int main()
{
	float amount,b ;
	int no_cents,cents_left,no_dollar,no_50c,no_25c,no_10c,no_5c,no_1c;
	printf("Enter amount: ");
	scanf("%f",&amount) ;
	while(amount<0)
	{
		printf("Sorry you entered a negative number. \n Please enter a positive number : ");
		scanf("%f",&amount);
	}
//	printf("Amount entered : %.10f\n",amount);
	b = (amount*100);
	//printf("%f\n",b);
	no_cents = (int)(b);
	
//	no_cents =(amount*10000);
//	printf("%d\n",no_cents);
	no_dollar = no_cents/100 ;
//	printf("%d\n",no_dollar);
	
	cents_left = b - no_dollar*100;
	no_50c = cents_left/50 ; 
	cents_left -= no_50c *50;

	no_25c = cents_left/25;
	cents_left -= no_25c*25;

	no_10c = cents_left/10;
	cents_left -= no_10c *10;
	//printf("%d",cents_left);
	no_5c = cents_left/5;
	cents_left -= no_5c * 5 ;

	no_1c = cents_left /1;

	printf(" Number of dollar 1 coins = %d\n",no_dollar);
	printf(" Number of 50 cents coins = %d\n",no_50c);
	printf(" Number of 25 cents coins = %d\n",no_25c);
	printf(" Number of 10 cents coins = %d\n",no_10c);
	printf(" Number of 5 cents  coins = %d\n",no_5c);
	printf(" Number of 1 cent   coins = %d\n",no_1c);
	printf(" Total number of coins required : %d\n",(no_1c+no_5c+no_10c+no_25c+no_50c+no_dollar))	;

}

