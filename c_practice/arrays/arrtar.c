#include<stdio.h>
void main()
{
	int arr[] = {1,3,5,6,7};
	printf("before reverse:\n");
	for(int i= 0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	for(int i = 4;i>=2;i--)
	{
		int temp = arr[i];
		arr[i] = arr[4-i];
		arr[4-i] = temp;
	}
	printf("\n");
	printf("after reverseing\n");

	for(int i = 0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d",arr[4]);
	printf("\n");
}
