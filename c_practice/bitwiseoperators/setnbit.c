#include<stdio.h>
void main()
{
	int a,n;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter n value:");
	scanf("%d",&n);
	a = (a | 1 << (n-1));
	printf("%d",a);
	printf("\n");
}
