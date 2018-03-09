#include<stdio.h>
#include<stdlib.h>

int main()
{

	FILE* fp;
	char ch;

	if((fp=fopen("./1.txt","r"))==NULL)
	{
		printf("open file error!\n");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	return 0;
}
