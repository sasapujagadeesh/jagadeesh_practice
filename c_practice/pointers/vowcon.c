#include<stdio.h>
#include<string.h>
void main()
{
	char str[] = "i am jagadeesh";
	int l = strlen(str);
	int count = 0,spcount = 0,concount = 0;
	for(int i = 0;i<l;i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			//int count = 0;
			count++;
		}
		else if(str[i] == ' ')
		{
			//int spcount = 0;
			spcount++;
		}
		else
		{
			//int concount = 0;
			concount++;
		}
	}
	printf("total length of the string = %d\n",l);
	printf("constant count = %d\n",concount);
	printf("vowel count = %d\n",count);
	printf("spaces count = %d\n",spcount);
	
}
