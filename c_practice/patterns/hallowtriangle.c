#include<stdio.h>
void main()
{
	int i,j,k,l,m;
	for(i=1;i<=6;i++)
	{
		for(j = 1;j<=(6-i);j++)
		{
			printf("  ");
		}
		for(k=1;k<=1;k++);
		{
			printf(" * ");
		}
		
		if(i >1)
		{
			
		for(l =1;l<=(2*(i -1)-1);l++)
		{
			printf("  ");
		}
		for(m = 1;m<=1;m++)
		{
			printf("* ");
		}
		}
		
		printf("\n");

	}
	for(i=1;i<=8;i++)
	{
		printf(" * ");
	}
	printf("\n");
}


