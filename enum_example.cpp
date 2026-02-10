#include<stdio.h>
enum day{
	MON=1,TUE,WED,THU,FRI,SAT,SUN
};
int main()
{
	enum day today;
	today=WED;
	printf("Today is day number: %d\n",today);
	return 0;
}
