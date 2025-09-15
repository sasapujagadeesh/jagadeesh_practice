#include<stdio.h>
void main()
{
	int a = 10,b = 20,c = 30;
	int *arr[3] = {&a,&b,&c};
	printf("array of pointers:");
	printf("%d %d %d",*arr[0],*arr[1],*arr[2]);
	printf("\n");
	int nums[3] = {100,200,300};
	int (*ptr)[3] = &nums;
	printf("pointer to an array:");
	printf("%d %d %d",(*ptr)[0],(*ptr)[1],(*ptr)[2]);
	printf("\n");
}
