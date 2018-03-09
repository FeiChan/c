#include<stdio.h>

int main()
{

	int (*(arr2[]))={
	(int[])	{0,1,2,3},
	(int[])	{4,5,6},
	(int [])	{7,8}
	};

	int row=0;
	for(int i=0;i<1;i++)
	{
		printf("layer1[%d][%d] Address:%p Value: %d\n",row,i,&arr2);
	}
	return 0;
}
