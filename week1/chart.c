#include<stdio.h>
int main()
{
	int mm,mf,fm,ff,sum;
	float counter,i;
	printf("Enter number of male spotting male     :");
	scanf("%d",&mm);
	printf("Enter number of male spotting female   :");
	scanf("%d",&mf);
	printf("Enter number of female spotting male   :");
	scanf("%d",&fm);
	printf("Enter number of female spotting female :");
	scanf("%d",&ff);
	sum = mm+mf+fm+ff;
	counter =  80.0/sum;
	i = 0 ;
	while(i<sum)
	{
		printf("%f\n",i);
		i = i+counter;
	}
	printf("\n");
}
