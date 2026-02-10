#include<stdio.h>
struct student
{
	int rno;
	int m1;
	int m2;
	int m3;
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the student rno :");
		scanf("%d",&s[i].rno);
		
		printf("enter the marks 1:");
		scanf("%d",&s[i].m1);
		printf("enter the marks 2:");
		scanf("%d",&s[i].m2);
		printf("enter the marks 3:");
		scanf("%d",&s[i].m3);
	}
	for (i=0;i<3;i++)
	{
		printf("%d %d %d %d\n",s[i].rno,s[i].m1,s[i].m2,s[i].m3);
	}
	return 0;
}
