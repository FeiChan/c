#include<stdio.h>


int main()
{
	int vector[5]={1,2,3,4,5};
	int *pv=vector;

	printf("%d\n",*pv);
	printf("%p\n",pv);
	//vector=vector+1;
	pv=pv+1;
	printf("%d\n",*pv);
printf("%p\n",pv);


int *pi= 0;
*pi=*pi+12;
printf("%d",*pi);
}
