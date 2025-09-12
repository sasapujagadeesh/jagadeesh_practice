#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter n value:");
	scanf("%d",&n);
	int temp = n;
	while(n>0)
	{
		if(n&1)
		{
			count++;
		}
		n = n >> 2;
	}
	if(count == 1)
	{
		printf("%d is a power of 4\n",temp);
	}
	else
	{
		printf("%d is not a power of 4\n",temp);
	}
}


