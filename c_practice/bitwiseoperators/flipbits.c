#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int flipnum = ~n;
	printf("%d\n",flipnum);
}
