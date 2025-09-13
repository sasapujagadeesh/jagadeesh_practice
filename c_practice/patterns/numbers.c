#include<stdio.h>
void main()
{
	char c = '0';
	for(int i = 48;i<=52;i++)
	{
		for(int j=48;j<=i;j++)
		{
			printf("%d ",c-'0');
			c++;
		}
		printf("\n");
	}
}

