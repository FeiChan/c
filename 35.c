#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{

	char* error="ERROR: ";
	char* errorMessage="Not enough memory";
 //
char buffer[100]="\0";

	
//	char* buffer=malloc(strlen(error)+strlen(errorMessage)+1);
	strcpy(buffer,error);
	strcat(buffer,errorMessage);

	printf("%s\n",buffer);
	printf("%s\n",error);
	printf("%s\n",errorMessage);

	return 0;
}
