#include<stdio.h>
void main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	int sum = 0;
	for(int i = 0;i<5;i++)
	{
		sum = sum + *(ptr + i);
	}
	printf("%d",sum);
	printf("\n");
}
