i#include<stdio.h>

//#define ptrInt int*
//typedef int *ptrInt;
int main()
{

	int a=2;
	ptrInt ptr1,ptr2;

	ptr1=&a;
	ptr2=a;

	*ptr1=100;
	printf("%d,%d",*ptr1,ptr2);
	return 0;
}
