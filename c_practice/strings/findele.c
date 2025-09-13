#include<stdio.h>
void main()
{
	int arr[] = {1,2,3,4,5,6};
	int n,count = 0;
	printf("enter number to search:");
	scanf("%d",&n);
	int *ptr = arr;
	for(int i = 0;i<6;i++)
	{
		if(*(ptr+i) == n)
		{
			count = 1;
			printf("%d find at %d",*(ptr+i),i);
			break;
		}
	}
	if(count == 0)
	{
		printf("element not found\n");
	}
}


