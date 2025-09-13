#include<stdio.h>
void main()
{
	int arr[10] = {10,6,7,3,1,2,4,5,8,9};
	
	for(int i = 0;i<10;i++)
	{
		int min = i;
		for(int j = i+1;j<10;j++)
		{
			//int min = arr[j];
			if(arr[min] > arr[j])
			{
				//int min = arr
				min = j;
			}
		}
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		
		
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}



