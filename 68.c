#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct _person
{
	char* firstName;
	char* lastName;
	char* title;
	unsigned int age;
}Person;


int main(int argc,char* argv[])
{

	Person person;
	Person* ptrPerson = &person;
	
//ptrPerson = (person*)malloc(strlen("Emiily")+1);
	ptrPerson->firstName =(char*)malloc(strlen("Emily")+1);
	strcpy(ptrPerson->firstName,"Emily");
	person.age=23;

	printf("person's name is %s,age is %d\n",ptrPerson->firstName,
			ptrPerson->age);

	return 0;
}
