#include<stdio.h>

char* staticFormat(const char* name,size_t quantity,size_t weight)
{
	static char buffer[64];
	sprintf(buffer,"Item: %s Quantity: %lu weight: %lu",name,quantity,weight);
	return buffer;
}
int main()
{
	printf("%s\n",staticFormat("google",26,1e+6));

	return 0;
}
