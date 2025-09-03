#include<stdio.h>
void main()
{
	int a;
	int count = 0;
	printf("enter a value:");
	scanf("%d",&a);
	while(a>0)
	{
		a = a >> 1;
		count++;
	}
	printf("%d\n",count);
}

