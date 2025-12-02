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
	char str2[100];
	printf("enter the string 1:");
	fgets(str1,100,stdin);
	myremove(str1);
	printf("enter the string 2:");
	fgets(str2,100,stdin);
	myremove(str2);
	int len = 0;
	int j = 0;
	while(str1[j] != '\0')
	{
		len++;
		j++;
	}
	j = 0;
	while(str2[j] != '\0')
	{
		str1[len+j] = str2[j];
		j++;
	}
	str1[len+j] = '\0';
	printf("string1:%s\n",str1);
}



