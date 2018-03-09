#include<stdio.h>
#include<stdlib.h>

int main()
{


	FILE* fp;
	char fname[30],str[30];
	printf("please input filename:\n");
	scanf("%s",fname);
	if((fp=fopen(fname,"w"))==NULL)
	{
		printf("cannot open file\npress any key to continue:\n");
		getchar();
		exit(0);
			
	}
	printf("please input string:\n");
//getchar();
	char a;
	scanf("%c",&a);

	gets(str);
	fputs(str,fp);
	fclose(fp);
   
	return 0;
}
