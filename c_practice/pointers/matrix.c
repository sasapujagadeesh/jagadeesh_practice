#include<stdio.h>
void main()
{
	int arr[3][3];
	int (*ptr)[3] = arr;
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("[%d] [%d]:",i,j);
			scanf("%d",(*(ptr+i)+j));
		}
		printf("\n");
	}
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	printf("\n");
}
