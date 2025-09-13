#include<stdio.h>
int fact(int n)
{
	int result =1;
	for(int i =1;i<=n;i++)
	{
		result = result*i;
	}
	return result;
}
void main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int res = fact(n);
	printf("%d",res);
}
