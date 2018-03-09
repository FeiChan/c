#include<stdio.h>
#include<stdlib.h>
int main()
{


	int row=2;
	int column=5;

	int **matrix=(int **)(row * sizeof(int*));

	for(int i=0;i<row;i++)
	{
		matrix[i]=(int*)malloc(sizeof(int)*column);
	}


	return 0;
}
