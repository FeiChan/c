#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
	char ch;
	if((fp=fopen("./2.txt","r"))==NULL)
	{
		printf("cannot open the file temporarily!\n");
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
