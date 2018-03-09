#include<stdio.h>

int main()
{

	char name[]="\0";
	int age=0;
	char app[10]="\0";
	scanf("%s%d",name,&age);
	printf("%s %d",name,age);
	scanf("%s",app);
	puts(app);
	return 0;
}
