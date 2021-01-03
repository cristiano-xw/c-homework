#include<stdio.h>
#include<string.h>
int a[1111]={0};
void count(int n)
{   
    memset(a,0,sizeof(a));
    a[1]=1;
	int i=0;int j=0;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i/2;j++)
		{
			a[i]=a[j]+a[i];//加上所包含数的情况
		}
			a[i]=a[i]+1; //a[i]加上自己成为一种新情况 
		
	}     
}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	count(n);
	printf("%d",a[n]);
	return 0;
}
