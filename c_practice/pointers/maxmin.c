#include<stdio.h>
void main()
{
	int arr[] = {8,1,2,5,6,7};
	int *ptr = arr;
	int min = *ptr;
	for(int i = 0;i<6;i++)
	{
		if(min > *(ptr+i))
		{
			min = *(ptr+i);
		}
	}
	printf("min = %d",min);
	printf("\n");
	int max = *ptr;
	for(int i = 0;i<6;i++)
	{
		if(max< *(ptr+i))
		{
			max = *(ptr+i);
		}
	}
	printf("max = %d",max);
	printf("\n");
}

