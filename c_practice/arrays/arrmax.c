#include<stdio.h>
void main()
{
	int arr[] = {15,20,30,55,60,77,12,66};
	int i,high = 0;
	int s = (sizeof(arr)/sizeof(arr[0]));
	for(i = 0;i<s;i++)
	{
		if(high<arr[i])
		{
			high = arr[i];
		}
	}
	printf("%d\n",high);
}

