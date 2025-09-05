#include<stdio.h>
int neon(int n)
{
	int sq = n*n;
	int sum = 0;
	while(sq > 0)
	{
		sum = sum + (sq%10);
		sq = sq/10;
	}
	if(sum == n)
	{
		printf("%d is a nenon number\n",n);
	}
	else
	{
		printf("%d is not a nenon number\n",n);
	}
	return 0;
}
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	neon(n);
}
