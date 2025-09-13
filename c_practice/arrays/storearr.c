#include<stdio.h>
void main()
{
	int arr[10];
	for(int i = 0;i<10;i++)
	{
		printf("enter %d element of the array:",i);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	for(int i = 0;i<10;i++)
        {
                printf("  %d",arr[i]);
        }
	printf("\n");
}
