#include<stdio.h>
void main()
{
	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<(5-i);j++)
		{
			printf("  ");
		}
		for(int j = i;j>=1;j--)
		{
			printf("%d ",j);
		}
		for(int j = 2;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
