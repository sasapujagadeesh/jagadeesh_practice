#include<stdio.h>
void main()
{
	int i,count = 0;
	printf("enter a number:");
	scanf("%d",&i);
	int k = i;
	int j = i;
	while(i>0)
	{
		if((i&1) == 0)
		{
			break;
		}
		count++;
		i = i >> 1;
	}
	printf("%d before\n",k);
	j = j | (1 << count);
	printf("%d after\n",j);
}



