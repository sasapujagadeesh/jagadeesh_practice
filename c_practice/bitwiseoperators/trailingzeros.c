#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter n value:");
	scanf("%d",&n);
	while(n>0)
	{
		if(n & 1)
		{
			break;
		}
		count++;
		n = n >> 1;
	}
	printf("numbe rof trailing zeros %d\n",count);
}

