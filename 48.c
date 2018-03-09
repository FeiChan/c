#include<stdio.h>
#include<stdlib.h>
int main()
{


	int *pi=(int*)malloc(sizeof(int));
    *pi=12;
	free(pi);

	pi=NULL;
	return 0;
}
