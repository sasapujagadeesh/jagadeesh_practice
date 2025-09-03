#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int count = 0;
	int temp = n;
	while(n>0)
	{
		n = n>>1;
		count++;
	}
	if(temp & 1<<(count-1))
	{
		printf("msb is set");
	}
	else
	{
		printf("msb is reset");
	}
	printf("\n");
}

