#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	//char ch;
	//printf("enter the charecter fre to count:");
	//ch = getchar();

	int i = 0;
	int fre = 0;
	while(str[i] != '\0')
	{
		int count = 0;
		int j = 0;
		while(j != i)
		{
			if(str[i] == str[j])
			{
				count++;
			}
			j++;
		}
		if(count == 0)
		{
			j = 0;
			while(str[j] != '\0')
			{
				if(str[j] == str[i])
				{
					count++;
				}
				j++;
			}
			printf("frequency of %c is %d\n",str[i],count);
		}
		i++;
	}
}

