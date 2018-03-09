#include<stdio.h>
#include<string.h>
void sort(char* strings[],int n)
{
	char* temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(strings[i],strings[j])>0)
			{
				temp=strings[i];
				strings[i]=strings[j];
				strings[j]=temp;
			}
		}
	}
}

int main()
{

	int n=12;
	int i;
	char** p;
	char*  month[]=
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"Octorber",
		"November"	
		"December"
	};
   
	p=month;
	sort(p,n);
	printf("After sort,12 months list as follow:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t",month[i]);
	}

	return 0;
}

















