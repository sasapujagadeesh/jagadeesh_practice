#include<stdio.h>
int fib(int n)
{
	if(n == 0)
	{
		return 0;
	}
	if(n == 1)
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	for(int i = 0;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
	printf("\n");
}
