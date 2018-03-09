#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int compare(const char* s1,const char* s2)
{
	return strcmp(s1,s2);
}

char* stringToLower(char* string)
{
	char* tmp=(char*)malloc(strlen(string)+1);
	char* start=tmp;
	while(*string !=0)
	{
		*tmp++=tolower(*string++);

	}
	*tmp=0;
    return start;
}
//char* stringToLower(char*  );
int compareIgnoreCase( char* s1, char* s2)
{
	char* t1=stringToLower(s1);
	char* t2=stringToLower(s2);
	int result=strcmp(t1,t2);
	free(t1);
	free(t2);
	return result;
}


void displayNames(char* names[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%s\n",names[i]);
	}
	printf("\n");
}
int main()
{

	
	return 0;
}
