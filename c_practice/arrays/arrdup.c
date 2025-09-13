#include<stdio.h>
void main()
{
	int a;
	int count = 0;
	printf("enter size of the array:");
	scanf("%d",&a);
	int arr[a];
	int brr[a];
	int c[a];
	for(int i = 0;i<a;i++)
	{
		brr[i] = 0;
	}
	printf("enter array elements:\n");
	for(int i = 0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<a;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	/*for(int i = 0;i<a;i++)
	{
		printf(" %d ",brr[i]);
	}*/
	for(int i = 0;i<a;i++)
	{
		for(int j = 0;j<a;j++)
		{
			if(arr[i] != brr[j])
			{
				brr[count] = arr[i];
				count = count + 1;
			}
		}
	}
	for(int i = 0;i<a;i++)
	{
		printf(" %d ",brr[i]);
	}
}
