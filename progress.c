#include<stdio.h>
#include<unistd.h>
int main(void)
{
	int i;
	printf("\n");
	for(i=0; i<20; i++)
	{
		printf("Percentage completed : %d\r",i);
		fflush(stdout);
		sleep(1);
	}
//	printf("\n");
	fflush(stdout);
}

