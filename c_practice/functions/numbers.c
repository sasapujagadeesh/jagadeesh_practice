#include<stdio.h>
int num(int n)
{
	if(n == 0)
	{
		return 1;
	}
	num(n-1);
	printf("%d ",n);
}
void main()
{
	int n;
	printf("entyer a number:");
	scanf("%d",&n);
	num(n);
	printf("\n");
}
