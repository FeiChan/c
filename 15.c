#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	char filename[30],str[50];
	printf("please input filename:\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"rb"))==NULL)
	{
		printf("can not open file!\npress any key to continue\n");
	     getchar();
		 puts("last input");
         gets(str);
		exit(0);
	}
	printf("please input string:\n");
	getchar();
	getchar();
	putchar(ch);
}
