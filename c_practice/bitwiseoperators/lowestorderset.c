#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		if(n & 1)
		{
			break;
		}
		n = n >> 1;
	}
	printf("lowest order set bit %d\n",count);
}

