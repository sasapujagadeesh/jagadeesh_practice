#include<stdio.h>
void main()
{
	int n,u = 0;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	int unique[n];
	printf("enter array elemets:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i =0;i<n;i++)
	{
		int count = 0;
		for(int j = 0;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		if(count == 1)
		{
			unique[u] = arr[i];
			u++;
		}
	}
	for(int i = 0;i<u;i++)
	{
		printf("%d ",unique[i]);
	}
	printf("\n");
}
