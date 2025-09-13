#include<stdio.h>
void main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr1[10];
	int *ptr = arr;
	int *ptr1 = arr1;
	for(int i = 0;i<10;i++)
	{
		*(arr1 + i) = *(arr + i);
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",*(arr1+i));
	}
	printf("\n");
}

