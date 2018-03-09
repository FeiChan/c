#include<stdio.h>
#define SIZE 5


int main()
{
static int arr[SIZE];
int arr2[SIZE];
for(int i=0;i<5;i++)
{
	printf("%d\n",*(arr+i));
}
for(int i=0;i<5;i++)
{
	printf("%d\n",*(arr2+i));
}

	return 0;
}
