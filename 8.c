#include<stdio.h>

int main()
{

	FILE *fp;
	char fname[30],str[30];
	printf("please input filenaem!\n");
	scanf("%s",fname);
	if((fp=fopen("4.txt","r"))==NULL)
	{
		printf("open file error\n");
		getchar();
		exit(0);
	}

	return 0;
}
