#include<stdio.h>
void main()
{
	for(int i = 0;i<8;i++)
	{
		for(int j =0;j<8;j++)
		{
			if(i == j || j == (7 - i))
			{
				printf("%d ",i);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
