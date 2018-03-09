#include<stdio.h>

int main()
{

	int matrix[2][5]={{1,2,3,4,5},{6,7,8,9,10}};

//	printf("%p\n",matrix[0]);
//	printf("%p\n",matrix[0]+1);
 //   printf("%lu\n",sizeof(matrix[0]));
	printf("%d\n",*(matrix[0]+2));

//	printf("%d\n",**(matrix+(0)+2));


	printf("%d\n",matrix[0][2]);
	return 0;
}
