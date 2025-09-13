#include<stdio.h>
void main()
{
	int arr[5] = {0,1,2,3,4};
	printf("enter rotation bits:");
	int a;
	int brr[5];
	scanf("%d",&a);
	for(int i = 0;i<a;i++)
	{
		brr[i] = arr[i];
	}	
	for(int i = a;i<5;i++)
	{
		arr[i-a] = arr[i];
	}
	for(int i = 0;i<a;i++)
	{
		arr[5-a+i] = brr[i];
	}
	for(int i = 0;i<5;i++)
        {
                printf(" %d ",arr[i]);
          }
	
	printf("\n");
}
