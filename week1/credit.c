#include<stdio.h>
#include<cs50.h>
#include"cs50.h"
int count(long long);
void findRemArray(long long);
int main()
{
	int size;
	long long int number;
	printf("enter credit card number : ");
	scanf("%llu",&number);
	printf("%llu\n",number);
	size = count(number);
//	printf("%d",size);
	
	findRemArray(number);
}


int count(long long number)
{
	int counter=0;
	while (number!=0)
	{
		number = number/10;
		counter = counter + 1 ;
	}
	return counter;
}

void findRemArray(long long  number)
{
	long long int num = number;	
	int counter = count(number);
	int c=0,b=1,d = (counter/2)+1;
	int rem[d],rema[d],sum,suma= 0;
	while(c<= counter/2+1)
	{
		rem[c] = number%100;
		rem[c] = rem[c] /10;
		number = number/100;
		c = c+1;
	}
	while (b <=d)
	{
		rema[b] = num%100;
		rema[b] = rema[b]%10;
		num = num / 100;
		suma += rema[b];
		b = b+1;
	}
	int i;
	sum = 0;
	for(i=0;i<c;i++)
	{
		rem[i] = rem[i]*2;
		if(rem[i]>=10)
		{
			rem[i]=rem[i]/10 + rem[i]%10;
		}
		sum += rem[i];
	}
	sum +=suma;
	printf("sum = %d\n",sum);
	
}

	
