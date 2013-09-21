#include<stdio.h>
int main()
{
	int mm,mf,fm,ff,sum,mm_sum,mf_sum,fm_sum,ff_sum;
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
	printf("M spotting M:\n");
	mm_sum = mm * counter ; 
	while(i < mm_sum)
	{
		printf("#");
		i = i+1;
	}
	printf("\n");

	i = 0 ;
	printf("M spotting F:\n");
	mf_sum = mf * counter ; 
	while(i < mf_sum)
	{
		printf("#");
		i = i+1;
	}
	printf("\n");


	i = 0 ;
	printf("F spotting M:\n");
	fm_sum = fm * counter ; 
	while(i < fm_sum)
	{
		printf("#");
		i = i+1;
	}
	printf("\n");


	i = 0 ;
	printf("F spotting F:\n");
	ff_sum = ff * counter ; 
	while(i < ff_sum)
	{
		printf("#");
		i = i+1;
	}
	printf("\n");


}
