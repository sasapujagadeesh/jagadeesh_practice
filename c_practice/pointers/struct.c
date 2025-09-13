#include<stdio.h>
void main()
{
	struct name
	{
		int number;
		char name;
	};
	struct name jagga;
	struct name *ptr;
	ptr = &jagga;
	ptr->number = 1;
	ptr->name = 'c';
	printf("%d %c ",ptr->number,ptr->name);
	printf("\n");
}
