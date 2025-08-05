#include<stdio.h>
void main()
{
	int i;
	printf("enter a number:");
	scanf("%d",&i);
	int count  = 0;
	while(i>0)
	{
		if(i&1)
		{
			count++;
		
		}
		i = i >> 1;
	}
	printf("%d\n",count);
}
