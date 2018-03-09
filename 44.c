#include<stdio.h>

int main()
{
	int i1=10;
	const int i2=20;
//	int * pi=&i1;
	const int *p2=&i1;
printf("%d\n",*p2);
printf("%d\n",i1);

//	printf("");
}
