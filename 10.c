#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE *fp;
	char ch,filename[50];
	printf("please input filename:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("can not open this file!\n");
		exit(0);
    }
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	rewind(fp);
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
}
