#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int num_count = 0;
	int alp_count = 0;
	int spe_count = 0;
	int vow_count = 0;
	int con_count = 0;
	int words_count = 0;
	int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			alp_count++;
			if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
			{
				vow_count++;
			}
			else
			{
				con_count++;
			}
		}

		else if(str[i] >= 48 && str[i] <= 57)
		{
			num_count++;
		}
		else
		{
			if(str[i] == ' ')
			{
				words_count++;
			}
			spe_count++;
		}
		i++;
	}

		printf("alphets count = %d\n",alp_count);
		printf("numbers count = %d\n",num_count);
		printf("special charecters count = %d\n",spe_count);
		printf("vowels count = %d\n",vow_count);
		printf("consonants count= %d\n",con_count);
		printf("number of words = %d\n",words_count+1);
	
}
