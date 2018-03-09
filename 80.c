#include<stdio.h>

int main()
{

	int iValue1,iValue2,iValue3,iResult;

	iValue1=10;
	iValue2=43;
	iValue3=26;
	iResult=0;

	iResult=iValue1++,--iValue2,iValue3+4;

	printf("the result is:%d\n",iValue1);
	printf("the result is:%d\n",iValue2);
	printf("the result is:%d\n",iValue3);
	printf("the result is:%d\n",iResult);

    printf("\n.......................\n");

	iResult=(iValue1++,--iValue2,iValue3+4);
	printf("the result is:%d\n",iValue1);
	printf("the result is:%d\n",iValue2);
	printf("the result is:%d\n",iValue3);
	printf("the result is:%d\n",iResult);

		
		
		return 0;
}
