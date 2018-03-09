#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int& num1,int& num2)
{
	int interVal = num1;
	num1=num2;
	num2 = interVal;
}
int main(int argc, char** argv)
{
	int n1 = 5;
	int n2 = 10;
	swap(n1, n2);
	printf("n1 = %d, n2 = %d\n",n1,n2);
}
