#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("enter number of elemets:");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	printf("enter the elemensts of the array:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(int i = 0;i<n;i++)
	{
		int min = i;
		for(int j = i+1;j<n;j++)
		{
			if(*(ptr+min)>*(ptr+j))
			{
				min = j;
			}
		}
		int temp = *(ptr+i);
		*(ptr+i) = *(ptr+min);
		*(ptr+min) = temp;
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}
				


