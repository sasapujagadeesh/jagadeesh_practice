#include<stdio.h>
int root(int n)
{
	int sum =0;
	while(n>0 || sum>=10)
	{
		if(n == 0)
		{
			n= sum;
			sum = 0;
		}
		int m = n%10;
		sum = sum+m;
		n = n/10;
	}
	return sum;
}
void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	int result = root(n);
	printf("%d",result);
}

