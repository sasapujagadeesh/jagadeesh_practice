#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++)
	{
		if(arr[i] != (i+1))
		{
			printf("missing number is %d ",(i+1));
			break;
		}
	}
	printf("\n");
}
