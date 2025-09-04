#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter size of the array:");
	scanf("%d",&n);
	int *ptr = (int*)malloc(5*sizeof(int));
	printf("enter elements:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1;j<n;j++)
		{
			if(*(ptr+i) > *(ptr+j))
			{
				int temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	printf("after sorting:");
	for(int i = 0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
