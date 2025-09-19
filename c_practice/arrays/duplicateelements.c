#include<stdio.h>
void main()
{
	int n,count = 0;
	printf("enter n value:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int dup[n];
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				int rep = 0;
				for(int k = 0;k<n;k++)
				{
				
					if(dup[k] == arr[i])
					{
						rep++;
					}
				}
				if(rep == 0)
				{
					dup[count] = arr[i];
					count++;
				}
			}
		}
	}
	for(int i = 0;i<count;i++)
	{
		printf("%d ",dup[i]);
	}
	printf("\n");
}
						
