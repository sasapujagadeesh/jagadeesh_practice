#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		if((n&1))
		{
			count++;
		}
		n= n >> 1;
	}
	printf("number of set bits %d\n",count);
}

