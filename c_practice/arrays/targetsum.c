#include<stdio.h>
void main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int target;
	printf("enter target sum:");
	scanf("%d",&target);
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1;j<n;j++)
		{
			if(arr[i]+arr[j] == target)
			{
				printf("%d %d\n",i,j);
			}
		}
	}
}
