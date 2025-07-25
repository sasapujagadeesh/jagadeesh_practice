#include<stdio.h>
void main()
{
	int a = 5,b = 6;
	printf("biwiseand a&b=%d\n",a&b);
	printf("bitwise or a|b=%d\n",a|b);
	printf("bitwise not~a=%d\n",~a);
	printf("bitwise xora^b=%d\n",a^b);
	printf("bitwise leftshift <<a=%d\n",a<<1);
	printf("bitwise rightshift >>a=%d\n",a>>1);
}
