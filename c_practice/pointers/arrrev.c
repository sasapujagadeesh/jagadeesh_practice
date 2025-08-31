#include<stdio.h>
void main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	for(int i = 4;i>=2;i--)
	{
		int temp = *(ptr+(4-i));
		*(ptr+(4-i)) = *(ptr+i);
	       *(ptr + i) = temp;
	}
	for(int i =0;i<5;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
}	
