#include<stdio.h>
void main()
{
	int i = 0x1234;
	i = (i & 0x0ff0) | ((i& 0xf000) >> 12) | ((i & 0x000f) << 12);
	printf("0x%x\n",i);
}
