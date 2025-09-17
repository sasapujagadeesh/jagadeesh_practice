#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	int temp = n;
	printf("enter array elements:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++)
	{
		if(arr[i] == 0)
		{
			count++;
			for(int j = i;j<n-1;j++)
			{
				arr[j] = arr[j+1];
			}
			n--;
			i--;
		}
	}
	for(int i = 0;i<(temp-count);i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
}
