#include<stdio.h>

void Sum(int* p,int n)
{
	int i,sum=0;
	printf("the odd:\n");
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2!=0)
		{
			printf("%5d",*(p+i));
			sum=sum+*(p+i);
		}
	}
	printf("\n");
	printf("sum:%d\n",sum);
}

int main()
{
	int* pointer,a[10];
	pointer=a;
	printf("please input:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	Sum(a,10);
}


