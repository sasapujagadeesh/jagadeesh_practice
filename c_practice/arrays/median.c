#include<stdio.h>
void main()
{
	int n;
	float median;
	printf("enter array 1 size:");
	scanf("%d",&n);
	int m;
	printf("enter array 2 size:");
	scanf("%d",&m);
	int arr1[n];
	int arr2[m];
	printf("enter arr 1 %d elements:",n);
       	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter arr 2 %d elements:",m);
	for(int i = 0;i<m;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int arr3[n+m];
	for(int i = 0;i<n;i++)
	{
		arr3[i] = arr1[i];
	}
	for(int i = 0;i<m;i++)
	{
		arr3[i+n] = arr2[i];
	}
	for(int i = 0;i<m+n;i++)
	{
		for(int j = i+1;j<m+n;j++)
		{
			if(arr3[i] > arr3[j])
			{
				int temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}
	for(int i = 0;i<m+n;i++)
	{
		printf("%d ",arr3[i]);
	}
	printf("\n");
	if((m+n)%2 == 0)
	{
		median = ((arr3[((m+n)/2)]+arr3[((m+n)/2)-1]))/2.0;
		printf("%f\n",median);
	}
	else
	{
		median = arr3[((m+n)/2)+1];
		printf("%f\n",median);
	}
}	
