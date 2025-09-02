#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,count = 0;
	printf("enter n value");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	for(int i = 0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(*(ptr+i) == *(ptr+j))
			{
				for(int k = j;k<n;k++)
				{
					*(ptr+k) = *(ptr+k+1);
				}
				count++;
				j--;
				n--;
			}
		}
	}
	for(int i =0;i<(n-count);i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}

