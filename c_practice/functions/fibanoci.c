#include<stdio.h>
int fib(int n,int arr[])
{
	for(int i = 2;i<n;i++)
	{
		arr[i] = arr[i-1]+arr[i-2];
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d ",(arr[n-1]+arr[n-2]));
	return 0;
}
void main()
{
	int n;
	printf("enter n value");
        scanf("%d",&n);
	int arr[n];
	arr[0] =0;
	arr[1] = 1;
	fib(n,arr);
	printf("\n");
}
