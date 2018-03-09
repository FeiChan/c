#include<stdio.h>
#include<stdlib.h>
char* blank(int number)
{
	char* spaces=(char*)malloc(number+1);
	int i;
	for(i=0;i<number;i++)
	{
		spaces[i]=' ';
	}
	spaces[number]='\0';
	return spaces;

}

int main()
{
  
	printf("Output blank is:\n");
printf("%s\n",blank(10));

}
