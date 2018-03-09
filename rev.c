#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* rev(char* str)
{
	char* dst=(char*)malloc(strlen(str)+1);
	for(int i=0;i<=strlen(str);i++)
	{
		dst[i]=str[strlen(str)-1-i];
	}
	dst[strlen(str)]='\0';
//	free(dst);
    return dst;
   free(dst);
}

int main()
{
	char* s="Hello world!";
	char* s2=rev(s);
//	free(s2);
	printf("%s\n",s2);
    free(s2);
}
