#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(int j =1;j<=(2*i-1);j++)
		{
			if(j == 1)
			{
				printf("%d",j);
			}
			else if(j == (2*i -1))
			{
				printf("%d",i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i = 1;i<=(n-1);i++)
	{
		for(int j = 1;j<=i;j++)
		{
			printf(" ");
		}
		for(int j =1;j<=(2*(n-i) -1);j++)
		{
			if(j == 1)
			{
				printf("%d",j);
			}
			else if(j == 2*(n-i)-1)
			{
				printf("%d",n-i);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

}	
