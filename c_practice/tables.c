#include<stdio.h>
void main()
{
	int i,j;
	printf("enter the number");
	scanf("%d",&i);
	for(j=1;j<=10;j++)
	{
		printf("%2d * %2d = %2d\n",i,j,i*j);
	}
}
