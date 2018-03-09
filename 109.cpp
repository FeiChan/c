#include<iostream>

class Student{
public:
	Student(int number,int chinese,int math);

private:
	int number;
	int chinese;
	int math;
};
Student::Student(int number,int chinese,int math)
{
	this->number=number;
	this->chinese=chinese;
	this->math=math;
}
