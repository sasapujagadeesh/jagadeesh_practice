#include<stdio.h>

void  myremove(char *ptr)
{
	int i = 0;
	while(*(ptr+i) != '\0')
	{
		if(*(ptr+i) == '\n')
		{
			*(ptr+i) = '\0';
		}
		i++;
	}
}


void main()
{
	char str1[100];
	printf("enter the string1 in lower case letters:");
	fgets(str1,100,stdin);
	myremove(str1);
	char str2[100];
	printf("enter the string2 in upper case letters:");
	fgets(str2,100,stdin);
	myremove(str2);
	char str3[100];
	printf("enter the string to toggle:");
	fgets(str3,100,stdin);
	myremove(str3);
	int k = 0;
	while(str1[k]!='\0')
	{
		if(str1[k] != ' ')
		{

			str1[k] = str1[k] - 32;
		}
		k++;
	}
	int j = 0;
	while(str2[j] != '\0')
	{
		if(str2[j] != ' ')
		{
			str2[j] = str2[j]+32;
		}
		j++;
	}
	int z = 0;
	while(str3[z] != '\0')
	{
		if(str3[z] != ' ')
		{
			if(str3[z] <= 90 && str3[z] >= 65)
			{
				str3[z] = str3[z]+32;
			}
			else if(str3[z] >= 97 && str3[z] <= 122)
			{
				str3[z] = str3[z]-32;
			}
			else
			{
				continue;
			}
		}
		z++;
	}
	printf("string1:%s\n",str1);
	printf("string2:%s\n",str2);
	printf("string3:%s\n",str3);
}


