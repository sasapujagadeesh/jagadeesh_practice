#include<stdio.h>
void main()
{
	int arr[10];
	int *ptr = arr;
	printf("enter the array elements:");
	for(int i = 0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",*(ptr+i));
	}
}

