#include<stdio.h>
int main()
{

	char str1[]="You are beautiful!",str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	while(*p1 !='\0')
	{
       *p2=*p1;
	   p1++;
	   p2++;
	}
	*p2='\0';
	printf("Now the string2 is:\n");
	puts(str2);
	return 0;
}
