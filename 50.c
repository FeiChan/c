#include<stdio.h>

int main()
{

	char* string1;
	char* string2;
	string1=(char*)malloc(16);
	strcpy(string1,"0123456789AB");

	string2=realloc(string1,8);
	printf("string1m
			");
	return 0;
}
