#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("enter n value in binary:");
	scanf("%d",&n);
	int res = 0,c = 0;
	while(n>0)
	{
		int count  = 0,num = 0;
		while(count < 3)
		{
			int rem = n%10;
			num += rem*pow(2,count);
			count++;
			n = n/10;
		}
		if(c == 0)
		{
			res = res + num; 
		}
		if(c == 1)
		{
			res = res + num*10;
		}
		if(c == 2)
		{
			res = res + num*100;
		}
		if(c == 3)
		{
			res =  res + num*1000;
		}
		c++;
	}
	printf("%d\n",res);
}
