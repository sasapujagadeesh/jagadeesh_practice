#include<stdio.h>
void main()
{
	int arr1[10] = {10,9,4,2,5};
	int arr2[5] = {1,3,7,6,8};
	for(int i = 0;i<5;i++)
	{
		arr1[5+i] = arr2[i];
	}
	for(int i = 0;i<10;i++)
	{
		for(int j = i+1;j<10;j++)
		{
			if(arr1[i] > arr1[j])
			{
				int temp = arr1[i];
				arr1[i]  = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
