#include<stdio.h>
//#include<string.h>
struct stu
{
	int stu_no;
	char stu_name[50];
	int stu_fee;
};
int main()
{
	struct stu s1,s2;
	printf("enter student1 details\n");
	scanf("%d %s %d",&s1.stu_no,s1.stu_name,&s1.stu_fee);
	printf("enter student 2 details\n");
	scanf("%d %s %d",&s2.stu_no,s2.stu_name,&s2.stu_fee);
	printf("student no is %d name is %s student fee %d\n",s1.stu_no,s1.stu_name,s1.stu_fee);
	printf("student no is %d name is %s student fee %d\n",s2.stu_no,s2.stu_name,s2.stu_fee);
}
