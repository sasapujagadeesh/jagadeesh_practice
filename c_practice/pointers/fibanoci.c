#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	*(ptr) = 0;
	*(ptr+1) = 1;
	for(int i = 2;i<n;i++)
	{
		*(ptr+i) = *(ptr+i-1)+*(ptr+i-2);
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
