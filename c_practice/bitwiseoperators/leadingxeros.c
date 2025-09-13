#include<stdio.h>
void main()
{
	int count = 0;
	unsigned long long n;
	printf("enter n value:");
	scanf("%llu",&n);
	while(!(n & (1 << 63)))
	{
		count++;
		n = n << 1;
	}
	printf("%d\n",count);
}


