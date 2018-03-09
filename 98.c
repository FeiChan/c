#include<stdio.h>

int main()
{

	short i;
	short* p;
	printf("please input the number:\n");
	scanf("%d",&i);
	p=&i;
	printf("the result is %d\n",p);
	printf("the result is %p\n",p);
	p++;
	printf("the result2 is: %d\n",p);
	printf("the result2 is: %p\n",p);
	return 0;
}
