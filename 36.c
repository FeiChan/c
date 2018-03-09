#include<stdio.h>
#include<string.h>
int main()
{

	char command[16];

	printf("Enter a command: ");
	scanf("%s",command);
	if(strcmp(command,"quit")==0)
	{
		printf("The command is quit");
	}else{
		printf("The command was not quit");
	}

	return 0;
}
