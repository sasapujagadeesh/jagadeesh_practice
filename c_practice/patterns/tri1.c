#include<stdio.h>
void main()
{
	for(int i = 1;i<=4;i++)
	{
		for(int j  = 1;j<=(5-i);j++)
		{
			printf("  ");
		}
		for(int j = 1;j<=(2*i - 1);j++)
		{
			static int n =1;
			printf("%2d",i);
			n++;
		}
		printf("\n");
	}
}
