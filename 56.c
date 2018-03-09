#include<stdio.h>


void passingAddressOfConstants(const int* num1,int* num2)
{
	*num2=*num1;
}

int main()
{
const int limit=100;
int result=5;
passingAddressOfConstants(&limit,&result);
printf("%d\n",result);
	return 0;
}
