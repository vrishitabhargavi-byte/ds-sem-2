#include<stdio.h>
#define MAX 10
int S[MAX];
int top=-1;
push()
{
	int ele;
	if(top==MAX-1)
	{
		
		printf("stack is full");
	          }
	else
	{
	printf("enter element ");
	scanf("%d",&ele);
	top++;
	S[top]=ele;
}
}
//display
display()
{
	int i;
	printf("elements are");
	for(i=top;i>=0;i--)
	printf("%d\n",S[i]);
}
//pop
pop()
{
	int ele;
	if(top==-1)
	{
		printf("stack is empty");

	}
	else
	{
	ele=S[top];
	top--;
}
}
int main()
{
	int ch;
	while(1)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.display\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
		}
	}
}

