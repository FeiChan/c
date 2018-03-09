#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int* pi=calloc(5,sizeof(int));

	int *p2=malloc(5*sizeof(int));
	memset(p2,0,5*sizeof(int));
}

