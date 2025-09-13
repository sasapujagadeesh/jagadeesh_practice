#include<stdio.h>
int arr[10] = {9,8,7,6,5,4,3,2,1,10};
int min(int arr[10])
{
	int min;
	for(int i = 0;i<10;i++)
	{
		min = arr[i];
		if(min > arr[0])
		{
			min = arr[i];
		}
		
	}
	return min;
}
void main()
{
	min(arr);
}


		


