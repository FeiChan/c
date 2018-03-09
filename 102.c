#include<stdio.h>


int main()
{

	int i,j;
	int a[10];
	int iTemp;
	int iPos;
	printf("asignment to array:\n");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<9;i++)
	{
		iTemp=a[i];
		iPos=i;
		for(j=i+1;j<10;j++)
		{
           if(a[j]<iTemp)
		   {
			   iTempt=a[j];
			   iPos=j;
		   }
		}
	}

	//swap two values

	return 0;
}










