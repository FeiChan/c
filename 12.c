#include<stdio.h>

int main()
{
	FILE *fp1,*fp2;
	char ch,filename1[30],filename2[30];
	printf("please input filename1:\n");
	scanf("%s",filename1);
	printf("pleae input filename2:\n");
	scanf("%s",filename2);
	if((fp1=fopen(fname1,"ab+"))==NULL)
	{
		printf("cannot open file1,press any key to comntinue\n");
		getchar();
		exit(0);
	}
	if((fp2=fopen(fname2,"rb"))==NULL)
	{
		printf("cannot open,press any key to continue\n");
		getchar();
		exit(0);
	}

	return 0;
}
