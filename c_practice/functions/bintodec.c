#include<stdio.h>
#include<math.h>
//int sum = 0;
int bintodec(int n)
{
	int sum = 0,i = 0;
	while(n>0)
	{
		//int sum = 0;
		//int i = 0;
		int j = n%10;
		sum = sum + (int)j*pow(2,i);
		n = n/10;
		i++;
	}
	return sum;
}
void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	int result = bintodec(n);
	printf("%d",result);
	printf("\n");
}
			
