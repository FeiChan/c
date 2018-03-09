#include<stdio.h>
#include<stdlib.h>
int main()
{

  int *ilntMalloc=(int*)malloc(sizeof(int));
  *ilntMalloc=100;
  printf("%d\n",*ilntMalloc);

free(ilntMalloc);
	return 0;
}
