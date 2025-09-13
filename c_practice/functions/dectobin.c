#include<stdio.h>
int dectobin(int n)
{
	while(n>0)
	{
		if(n%2 == 0)
		{
			printf("%d ",0);
		}
		else
		{
			printf("%d ",1);
		}
		n = n/2;
	}
}
void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	dectobin(n);
}

