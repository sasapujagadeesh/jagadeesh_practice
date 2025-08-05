#include<stdio.h>
void main()
{
	int i = 0x1234;
	i = ((i & 0xff00) >> 8) | ((i & 0x00ff) << 8);
	printf("0x%x",i);
}

