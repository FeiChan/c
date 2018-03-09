#include<stdio.h>
#include<string.h>
#include<ctype.h>

void encrypt(char *data,char const *key)
{
	int i,len;
	len=strlen(data);
	for(i=0;i<len;i++)
	{
		if(isalpha(data[i]))
		{
			if(isupper(data[i]))
		
				data[i]=key[data[i]-'A'];
			
			else
				data[i]=key[data[i]-'a']+'a'-'A';
		}
	}
}
void decrypt(char *data,char const *key)
{
	int i,len,p[26];
	for(i=0;i<26;i++)
	{
		p[key[i]-'A']=i;
	len=strlen(data);
	for(i=0;i<len;i++)
	{
		if(isalpha(data[i]))
			data[i]=p[data[i]-'A']+'A';
		else
			data[i]=p[data[i]-'a']+'a';
	}
	}

}

int main()
{

}
