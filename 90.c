#include<stdio.h>

int main()
{


	char cGrade;
	printf("Please enter your grade\n");
	scanf("%c",&cGrade);
	printf("Grade is about:");
	switch(cGrade)
	{
		case 'A':
			printf("90-100\n");
			break;
		case 'B':
			printf("80-90");
			break;
		case 'C':
			printf("70-80");
			break;
		case 'D':
			printf("60-70");
			break;
//#		case 'E':
//#			printf("50-60");
//#			break;
		case 'F':
			printf("You enter the char is wrong!\n");
			break;
		default:
			printf("You enter the char is wrong!\n");
			break;
	}

	return 0;
}
