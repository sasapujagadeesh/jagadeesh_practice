#include<stdio.h>
void main()
{
	int arr[6] = {1,2,3,4,5,6};
	int pos;
	printf("enter no of positions to shift:");
	scanf("%d",&pos);
	int arr1[pos];
	for(int i =0;i<pos;i++)
	{
		arr1[i] = arr[i];
	}
	for(int i = 0;i<6;i++)
	{
		arr[i] = arr[i+pos];
	}
	for(int i = 0;i<pos;i++)
	{
		arr[6-pos+i] = arr1[i];
	}
	for(int i =0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

