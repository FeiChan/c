#include<stdio.h>

int main()
{

	char cBig;
	char cSmall;

	puts("Please enter capital character:");
	cBig=getchar();
	puts("Minuscule character is:");
	cSmall=cBig+32;
	printf("%c\n",cSmall);
	return 0;
}
