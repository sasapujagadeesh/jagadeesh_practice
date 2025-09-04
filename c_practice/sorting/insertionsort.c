#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter size of the array:");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n *sizeof(int));
	printf("enter elements:");
	for(int i =0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(int i = 1;i<n;i++)
	{
		int temp = *(ptr+i);
		int j = i-1;
		while(j >= 0 && *(ptr+j) > temp)
		{
			*(ptr+j+1) = *(ptr+j);
			j--;
		}
		*(ptr+j+1) = temp;
	}
	printf("after sorting:");
	for(int i = 0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}	

