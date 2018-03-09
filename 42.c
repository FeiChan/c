#include<stdio.h>

void sort(char *array[],int size)
{
	int swap=1;
	while(swap)
	{
		swap=0;
		for(int i=0;i<size-1;i++)
		{
			swap=1;
			char *tmp=array[i];
			array[i]=array[i+1];
			array[i+1]=tmp;
		}
	}
}

int main()
{

	char* arr[]={"1","10","100","100","1000"};
	sort(arr,5);
	for(int i=0;i<5;i++)
	{
		printf("%s  ",arr[i]);
	}

	return 0;
}
