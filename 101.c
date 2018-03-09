#include<stdio.h>

int main()
{
	int i,j;
	int a[10];
	int iTemp;
	printf("assignment to the array: \n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	//bubble sort algorithm

	for(i=1;i<10;i++)
	{
		for(j=9;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
               iTemp=a[j-1];
			   a[j-1]=a[j];
			   a[j]=iTemp;
			}

		}
	}

	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
			printf("\n");
	}

	return 0;

}




