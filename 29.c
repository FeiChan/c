#include<stdio.h>
#include<stdlib.h>

int main()

{

	int rows=2;
	int columns=5;
	int **matrix=(int**)malloc(rows *sizeof(int*));
	matrix[0]=(int*)malloc(rows * columns*sizeof(int));
	matrix[1]=matrix[0]+columns;

	return 0;
}
