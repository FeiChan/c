#include<stdio.h>

int main()
{

	char* Char="ILOVECHINA";

	puts(Char);
	puts("I\0LOVE\0CHINA");
	puts(Char);
	Char="ILOVE\0CHINA";
	puts(Char);

	return 0;
}
