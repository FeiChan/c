#include<stdio.h>

#include<stdlib.h>

int main()
{
  
	double *pDouble;
	int *pInt;
	pDouble=(double*)malloc(sizeof(double));
	printf("%d\n",sizeof(*pDouble));
	pInt=realloc(pDouble,sizeof(int));
	printf("%d\n",sizeof(*pInt));
	return 0;
}
