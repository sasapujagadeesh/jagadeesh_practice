#include<stdio.h>
void main()
{
	for(int i = 0;i<5;i++)
	{
		for(int j=0;j<(5-i);j++)
		{
			printf("* ");
		}
		for(int j = 0;j<(2*i);j++)
		{
			printf("  ");
		}
		for(int j = 0;j<(5-i);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i = 0;i<5;i++)
	{
		for(int j =0;j<=i;j++)
		{
			printf("* ");
		}
		for(int j = 0;j<(8-(2*i));j++)
		{
			printf("  ");
		}
		for(int j =0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");

	}
	printf("\n");	
}

