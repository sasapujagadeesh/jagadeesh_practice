#include<stdio.h>
int i,j,l,m,k;
void main()
{
	for(i=1;i<7;i++)
	{
		for(j=1;j<8-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(k =1;k<=8;k++)
	{
		for(l = 1;l<k;l++)
		{
			printf(" ");
		}
		for(l = 1;l<(8-k);l++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
