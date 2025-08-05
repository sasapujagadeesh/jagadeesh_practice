#include<stdio.h>
int main()
{
	int i =1;
pr10:
	if(i <=10)
	{
		printf("%d\n",i);
		i++;
	
	goto pr10;
	}
	return 0;
}
