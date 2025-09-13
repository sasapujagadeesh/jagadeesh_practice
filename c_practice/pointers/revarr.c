#include<stdio.h>
void main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	printf("before reverse:");
	int *ptr = arr;
	for(int i = 0;i<10;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	printf("after reverse:");
	for(int i = 9;i>=6;i--)
	{
		int temp = *(arr+i);
		*(arr+i) = *(arr+(9-i));
		*(arr+(9-i)) = temp;
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
