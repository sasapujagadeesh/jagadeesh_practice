#include<stdio.h>
void main()
{
	int n,num =1;
	printf("enter n value:");
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		int arr[i];
		for(int j = 1;j<=i;j++)
		{
			arr[j-1] = num;
			num++;
		}
		if(i % 2 == 1)
		{
			for(int j = 0;j<i;j++)
			{
				printf("%2d ",arr[j]);
			}
		}
		else
		{
			for(int j = i-1 ;j>=0;j--)
			{
				printf("%2d ",arr[j]);
			}
		}
		printf("\n");
	}
}

