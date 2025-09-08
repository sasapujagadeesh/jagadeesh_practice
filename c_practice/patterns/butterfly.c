#include<stdio.h>
void main()
{
int n;
printf("enter n value:");
scanf("%d",&n);
	for(int i = 1;i<n+1;i++)
	{
		for(int j =1;j<=i;j++)
		{
			printf("*");
		}
		for(int j = 1;j<=(n*2-2*i);j++)
		{
			printf(" ");
		}
		for(int j = 1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i = 1;i<n;i++)
	{
		for(int j =1;j<=(n-i);j++)
		{
			printf("*");
		}
		for(int j = 1;j<=(2*i);j++)
		{
			printf(" ");
		}
		for(int j =1;j<=(n-i);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

