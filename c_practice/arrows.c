#include<stdio.h>
void main()
{
	int i,j,k;
	for(i = 1;i<=5;i++)
	{
		for(j=1;j<=(4+i);j++)
		{
			printf("  ");
		}
		for(k =1;k<=1;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=1;i<=11;i++)
	{
		printf(" *");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(10-i);j++)
		{
			printf("  ");
		}
		for(k=1;k<=1;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
