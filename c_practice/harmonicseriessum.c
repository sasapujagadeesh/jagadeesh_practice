#include<stdio.h>
void main()
{
	int n;
	printf("enter the n value:");
	scanf("%d",&n);
	float sum = 0;
	for(int i = 1;i<=n;i++)
	{
		sum = sum + (float)1/i;
	}
	printf("harmonic sum = %f",sum);
	printf("\n");
}
