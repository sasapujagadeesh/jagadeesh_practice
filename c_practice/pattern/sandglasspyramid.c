#include<stdio.h>
void main()
{
	int rows;
	printf("enter no of rows:");
	scanf("%d",&rows);
	for(int i =1;i<=rows;i++)
	{
		for(int j =1;j<i;j++)
		{
			printf("  ");
		}
		for(int j=1;j<=2*rows-(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(int i =2;i<=rows;i++)
	{
		for(int j =1;j<=(rows-i);j++)
		{
			printf("  ");
		}
		for(int j = 1;j<=(2*i-1);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
