#include<stdio.h>
#include<stdlib.h>
//#define SIZE 5


int* allocateArray(int SIZE,int value)
{
  static	int arr[5];
	for(int i=0;i<SIZE;i++)
	{
		arr[i]=value;
	}
	return arr;
}

int main()
{
   int *vector=allocateArray(5,45);
   for(int i=0;i<5;i++)
   {
	   printf("%d\n",*(vector+i));
   }
	return 0;
}

