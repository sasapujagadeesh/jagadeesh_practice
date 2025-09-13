#include<stdio.h>
void main()
{
	int arr[] = {10,20,30,40,50,60,70};
	int s = sizeof(arr)/sizeof(arr[0]);
	int sum = 0,i;
	for(i=0;i<s;i++)
	{
		sum = sum + arr[i];
	}
	printf("sum of the array: %d\n",sum);
}
