#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "PoInTeRs iN c iS ImporTanT";
	char *ptr = str;
	int len = strlen(str);
	for(int i = 0;i<len;i++)
	{
		if(*(ptr+i)>='A' && *(ptr+i)<='Z')
		{
			*(ptr+i) = *(ptr+i)+32;
		}
	}
	printf("%s",str);
	printf("\n");
}
