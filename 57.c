#include<stdio.h>

void swapWithPointers(int* pnum1,int* pnum2);

int main()
{
   int num1=12;
   int num2=100;
   swapWithPointers(&num1,&num2);
   
   printf("%d %d\n",num1,num2);
	return 0;
}


void swapWithPointers(int* pnum1,int* pnum2)
{
	int tmp;
	tmp=*pnum1;
	*pnum1=*pnum2;
	*pnum2=tmp;
}
