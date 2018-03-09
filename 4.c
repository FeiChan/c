#include<stdio.h>

#include<stdlib.h>

int main()
{

	int *p;
	p=(int*)calloc(4,sizeof(int));
    for(int i=1;i<=4;i++)
	{
		*p=i;
		printf("%d\n",*p);
		p++;
	}
    
	
		free(p-4);
	
	//for(int i=1;i<=4;i++)
//	{
	//	free(p);
//	}
//	free(p);

p=NULL;		
	return 0;
}
