#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[50];
};
int main()
{
	//struct student s1={1,"Roshi"};
	struct student s1;
	s1.rno=1;
	strcpy(s1.name,"Roshi");
	printf("%d.%s",s1.rno,s1.name);
	struct student s2={2,"Ayra"};
	printf("\n%d.%s",s2.rno,s2.name);
	return 0;
}
