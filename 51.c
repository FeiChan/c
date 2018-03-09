#include<stdio.h>

int main()
{
	char str1[100]="\0";
	char str2[100]="\0";
	int i,j;
	scanf("%s",str1);
	i=0;
	j=0;
	while(str1[i]!='\0')
	{
		if(str1[i]>='0'&& str1[i]<='9')
		{
			str2[j]=str1[i];
//			j++;
		}
//		i++;
		j++;i++;
	}
	printf("%s",str2);
}
