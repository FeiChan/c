#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{


	FILE* fp;
	char filename[30],str[50];
	printf("please input filenaem:\n");

	scanf("%s",filename);
	if((fp=fopen("4.txt","wb"))==NULL)
	{
		printf("can not open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	printf("please input string:\n");
	getchar();
    gets(str);
    fputs(str,fp);
    fclose(fp);
	if((fp=fopen(filename,"rb"))==NULL)
	{
		printf("cannot open!\npress any key to continue\n");
		getchar();
		exit(0);
	}
	fseek(fp,5L,0);
	fgets(str,sizeof(str),fp);
	putchar('\n');
	puts(str);
	fclose(fp);
	return 0;
}



