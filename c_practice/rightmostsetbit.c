#include<stdio.h>
void main()
{
	int i,count = 0;
	printf("enter a  number:");
	scanf("%d",&i);
	int k = i;

	while(i>0)
	{
		count++;
		if(i&1)
		{
			break;
		}
		i = i >> 1;
	}
	printf("for %d right most set bit at position %d\n",k,count);

}

