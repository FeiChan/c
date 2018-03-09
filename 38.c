#include<stdio.h>

char* returnStaticLiteral(int code,int subCode)
{
	static char* bpCenter="Boston Processing Center";
	static char* dpCenter="Boston Processing Center";
	static char* apCenter="Boston Processing Center";
	static char* sjpCenter="Boston Processing Center";

	switch(code)
	{
		case 100:
			return bpCenter;
		case 135:
			if(subCode<35)
				return dpCenter;
		    else
				return bpCenter;
		case 200:
			return apCenter;
		case 400:
			return sjpCenter;
	}

}

int main()
{

	char* str=returnStaticLiteral(135,12);
	printf("%s\n",str);
	return 0;
}
