// This program selects a random number from 0 to  1023 and then asks the user to guess the number chosen.
//
#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int random,guess,j=0;
	char choice = 'y';
	srand(time(NULL));
	for(j=0;j<=8;j++)
	{
		random = rand()%1024;
		printf("random %d",random);
		printf("\nEnter Guess: ");
		scanf("%d",&guess);
		if(guess == random)
		{
			printf("Congrats, You will now get %d skittles\n",random);
			exit(0);
		}
		else
		{
			printf("OOPS ...\n");
		}
			printf("\n");
		
	
	}
}
