// This program illustrates the greedy algorithm. greedy algorithm calcullates the minimum number of coins that can be used to pay the bills
//1c,5c,10c,25c,50c,$1


#include<stdio.h>
#include<cs50.h>
float input(void);
float calculate(float);
int main(void)
{
	float a;
	int b=1,no_of_cents, no_1c,no_5c,no_10c,no_25c, no_50c,no_dollar;
	printf("Enter the amount: ");
	
	// for taking the amount to be converted
	scanf("%f",&a);

	// calculating no of cents
	no_of_cents = ( (int) (a * 100) ) % 100;
	printf("%d\n",(int)(a*100));

	//calculates no of $1 coins
	no_dollar = (int)a;
	printf("Number of $1 coins   : %d\n",no_dollar);

	// calculating no of 50c coins
	no_50c = no_of_cents / 50 ;
	printf("Number of 50c coins  : %d\n",no_50c);

	// calculating no of 25c coins
	no_25c = (no_of_cents % 50) / 25;
	printf("Number of 25c coins  : %d\n",no_25c);

	// calculating no of 10c coins
	no_10c = ( (no_of_cents % 50)% 25)/10;
	printf("Number of 10c coins  : %d\n",no_10c);

	// Calculating no of 5c coins
	no_5c = ( ( (no_of_cents % 50) % 25 ) %10 )/5;	
	printf("Number of 5c coins   : %d\n",no_5c);

	//calculating no of 1c coins
	no_1c = ((( (no_of_cents % 50) % 25)% 10) % 5);
	printf("Number of 1c coins   : %d\n",no_1c);

	//b = (1*no_1c + 5*no_5c + 10*no_10c + 25*no_25c + 50*no_50c)%100 + no_dollar;
	//printf("b = %d\n",b);
}
