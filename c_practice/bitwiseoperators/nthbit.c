#include<stdio.h>
void main()
{
	int a,n;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter bit value:");
	scanf("%d",&n);
	if(a & 1<<(n-1))
	{
		printf("n bit is set");
	}
	else
	{
		printf("n bit is reset");
	}
	printf("\n");
}
