#include<stdio.h>
int main(void)
{    
    int a[100];
	int n=0;
	scanf("%d",&a[0]);
	int i=0;
	while(a[i]!=1)
	{
	 while(a[i]%2==0&&a[i]!=1)
	 {
	 	a[i+1]=a[i]/2;
	 	i=i+1;
	 }
	 while (a[i]%2!=0&&a[i]!=1)
	 {
	 	a[i+1]=3*a[i]+1;
	 	i=i+1;
	 }
	}
	int b[100];
	int u=0;
	for(u=0;u<i+1;u++)
	{
		b[u]=a[i-u];
	}
	int m=0;
	for (m=0;m<i+1;m++)
	{
		printf("%d ",b[m]);
	}
} 
