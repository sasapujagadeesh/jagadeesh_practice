#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "PoinTerS in C Is moRe ImporTanT";
	char *ptr = str;
	int len = strlen(str);
	for(int i   = 0;i<len;i++)
	{
		if(*(ptr+i) > 96)
		{
			*(ptr+i) = *(ptr+i) - 32;
		}
	}
	printf("%s",str);
	printf("\n");
}
