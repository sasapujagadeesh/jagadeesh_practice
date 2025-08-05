#include<stdio.h>
void main()
{
	int i,count = 0;
	printf("enter the number:");
	scanf("%d",&i);
	int k = i;
        int j = i;
	while(i>0)
	{
		//count++;
		if(i&1)
		{
			break;
		}
		count++;
		i = i >> 1;
	}
	k = k&~(1<<count);
	printf("%d before\n",j);
	printf("%d after\n",k);
}

