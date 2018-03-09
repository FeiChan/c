#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *fp;
   char ch;
   if((fp=fopen("./1.txt","w"))==NULL)
   {
	 printf("cannot open file!\n");
	 exit(0);
   }
   ch=getchar();
   while(ch !='#')
   {
	   fputc(ch,fp);
	   ch=getchar();
   }
   fclose(fp);


	return 0;
}
