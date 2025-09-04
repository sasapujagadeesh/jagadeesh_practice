#include<stdio.h>
void main()
{
	int n,bits;
	printf("enter n value:");
	scanf("%d",&n);
	int temp = n;
	printf("enter no of bits to rotate:");
	scanf("%d",&bits);
	for(int i = 0;i<bits;i++)
	{
		if(n & 1)
		{
			n = (n >> 1)|(1 << 31);
		}
		else
		{
			n = (n >> 1)|(0);
		}
	}
	printf("after rotate bits to right %d \n",n);
	for(int i =0;i<bits;i++)
	{
		if(temp & (1 << 31))
		{
			temp = (temp << 1)|(1);
		}
		else
		{
			temp = (temp << 1) | (0);
		}
	}
	printf("after rotate bits to left %d \n",temp);	
}
