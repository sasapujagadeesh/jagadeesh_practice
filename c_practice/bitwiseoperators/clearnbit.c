#include<stdio.h>
void main()
{
	int a,n,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter n value:");
	scanf("%d",&n);
	b = a & ~(1<<(n-1));
	printf("after reset %d position %d",n,b);
	printf("\n");
}
	
