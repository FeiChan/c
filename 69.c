#include<stdio.h>


#define uint unsigned short int
#define LIST_SIZE 10

typedef struct _person{

	char* firstName;
	char* lastName;
	char* title;
	uint age;

}Person;

typedef struct _alternatePerson{

	char* firstName;
	char* lastName;
	char* title;
	short age;
}AlternatePerson;

Person* list[LIST_SIZE];

void initialzeList(){

	for(int i=0;i<LIST_SIZE;i++){

		list[i] = NULL;
	}
}

Person* getPerson(){

	for(int i=0;i<LIST_SIZE;i++)
	{
		if(list[i] != NULL){
			
			Person* ptr = list[i];
			list[i] = NULL;
			return ptr;


		}
	}
	Person* person = (Person*)malloc(sizeof(Person));
    return person;
}

Person* returnPerson(Person* person)
{
	for(int i=0;i<LIST_SIZE;i++)
	{
		if(list[i] == NULL){
			list[i]=person;
			return person;
		}
	}
	deallocatePerson(person);
	free(person);
	return NULL;
}

int main()
{
	Person person;
	AlternatePerson otherPerson;

	printf("%lu\n",sizeof(person));
	printf("%lu\n",sizeof(otherPerson));

	return 0;
}

