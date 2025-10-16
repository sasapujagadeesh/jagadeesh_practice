#include<stdio.h>
void main()
{
	int n,temp,min,max;
	printf("enter size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of array:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	min = arr[0];
	max = arr[n-1];

	printf("max = %d\n",max);
	printf("min = %d\n",min);

	for(int i = (n-1);i>= 0;i--)
	{
		if(arr[i] < arr[n-1])
		{
			printf("2nd largest element in the array is %d\n",arr[i]);
			break;
		}
	}

	int even[n];
	int odd[n];

	int even_count = 0;
	int odd_count = 0;

	for(int i = 0;i<n;i++)
	{
		if(arr[i] % 2 == 0)
		{
			even[even_count] = arr[i];
			even_count++;
		}
		else
		{
			odd[odd_count] = arr[i];
			odd_count++;
		}
	}
	printf("odd elements:");
	for(int i = 0;i<odd_count;i++)
	{
		printf("%d ",odd[i]);
	}
	printf("\n");

	printf("even elements:");
	for(int i = 0;i<even_count;i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n");
}



