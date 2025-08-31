#include<stdio.h>
int fact(int n)
{
	int fac = 1;
	for(int i = 1;i<=n;i++)
	{
		fac = (fac)*(i);
	}
	return fac;
}
int main()
{
	printf("enter a number:");
	int n;
	scanf("%d",&n);
	int (*fptr)(int);
	fptr = &fact;
	int res = fptr(n);
	printf("%d\n",res);
}

