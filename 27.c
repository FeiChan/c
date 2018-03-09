#include<stdio.h>
int main()

{
	int vector[5]={1,2,3,4,5};

	unsigned long vectLength=sizeof(vector)/sizeof(int);
	printf("%lu\n",vectLength);
	unsigned long vectLength2=sizeof(vector)/sizeof(vector[0]);
	printf("%lu\n",vectLength2);
	
}
