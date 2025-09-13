#include<stdio.h>
void main()
{
	struct padding
	{
		char a;
		int c;
		char b;
	};
	struct padding var;
	printf("%d\n",sizeof(var));
}
