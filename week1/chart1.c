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
	counter =  20.0/sum;
	i = 0 ;
	mm_sum = mm * counter ; 
	mf_sum = mf * counter;
	fm_sum = fm * counter;
	ff_sum = ff * counter;
	for(i = 20;i>0;i--)
	{
		if(mf_sum > i)
		{
			printf("###  ");
		}
		else printf("     ");
		if(mm_sum > i)
		{
			printf("###  ");
		}
		else printf("     ");
		if(fm_sum > i)
		{
			printf("###  ");
		}
		else printf("     ");
		if(ff_sum > i)
		{
			printf("###  \n");
		}
		else printf("     \n");
	}
	printf("M2F  M2M  F2M  F2F\n");
}
