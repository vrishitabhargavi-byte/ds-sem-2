#include<stdio.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	struct student s1={1,"Roshi"};
	printf("%d\n%s",s1.rno,s1.name);
	struct student s2={2,"Ayra"};
	printf("\n%d\n%s",s2.rno,s2.name);
	struct student s3={3,"Meerub"};
	printf("\n%d\n%s",s3.rno,s3.name);
	return 0;
}
