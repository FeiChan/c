
#include<stdio.h>
#include<string.h>
typedef struct _employee{


	char name[32];
	unsigned char age;

}Employee;

int compareEmployee(Employee* e1,Employee* e2)
{
	return strcmp(e1->name,e2->name);

}

void displayEmployee(Employee* employee)
{
	printf("%s\t%d\n",employee->name,employee->age);
}



