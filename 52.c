#include<stdio.h>

int main()
{
	char str[81];
	int count[26],i,k,n;
	scanf("%d",&n);
	while(n-->0)
	{
		scanf("%s",str);
		for(i=0;i<26;i++)
		{
			count[i]=0;
		i=0;
		  while(str[i]!='\0')
	    	{
		    	count[str[i]-'a']++;
			    i++;
		    }
		  k=0;
		  for(i=1;i<26;i++)
			  if(count[i]>count[k])
				  k=i;
		  printf("%c%d\n",'a'+k,count[k]);
		}
	}
	return 0;
}
