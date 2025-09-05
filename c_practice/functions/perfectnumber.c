#include<stdio.h>
int perfect(int n)
{
	int sum = 0;
	for(int i =1;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == n)
	{
		printf("%d is a perfect number\n",n);
	}
	else
	{
		printf("%d is not a perfect number\n",n);
	}
}
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	perfect(n);
}


