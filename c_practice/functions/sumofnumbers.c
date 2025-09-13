#include<stdio.h>
int sum(int n)
{
	if(n == 1)
	{
		return 1;
	}
	return n+sum(n-1);
}
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("%d\n",sum(n));
}
