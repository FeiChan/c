# include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *globalHeader="chapter";
	char globalArrayHeader[]="chapter";
	
	void displayHeader()
	{
		static char* staticHeader="Chapter";
		char* localHeader="Chapter";
		static char staticArrayHeader[]="Chapter";
		char localArrayHeader[]="Chapter";
		char* heapHeader=(char*)malloc(strlen("Chapter")+1);
		strcpy(heapHeader,"Chapter");
	}
}
