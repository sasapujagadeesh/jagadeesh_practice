#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	if(n & 1)
	{
		printf("lsb is set");
	}
	else
	{
		printf("lsb is reset");
	}
	printf("\n");

}
