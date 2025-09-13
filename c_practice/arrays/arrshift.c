#include<stdio.h>
void main()
{
	int arr[9] = {10,20,30,40,50};
	for(int i = 0;i<9;i++)
	{
		printf(" %d ",arr[i]);
	}
	int a,b;
	printf("\nenter the element to insert:");
	scanf("%d",&a);
	printf("enter the postion:");
	scanf("%d",&b);
	for(int i = 7;i>=b;i--)
	{
		arr[i+1] = arr[i];
	
	}
	arr[b] = a;
	for(int i = 0;i<9;i++)
	{
		printf(" %d ",arr[i]);
	}



}
