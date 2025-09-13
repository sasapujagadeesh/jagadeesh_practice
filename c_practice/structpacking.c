#include<stdio.h>
#pragma pack(1)
void main()
{

        struct padding
        {
                char a;
                int c;
                char b;
        };
        struct padding var;
        printf("%d\n",sizeof(var));
}
