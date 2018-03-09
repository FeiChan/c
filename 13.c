#include<stdio.h>
#include<stdlib.h>
int main()
{

	FILE* fp;
	char ch;
	while((fp=fopen("./2.txt","w"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	}

	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	
	return 0;
}
