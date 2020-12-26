#include<stdio.h>
#include<string.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{   int v=0;
		char a[1000]="0";
		char b[1000]="0";//×°ÄæÐòÊý×é 
		scanf("%s",a);
		int l=0;
		l=strlen(a);
		int j=0;
		for(j=0;j<l;j++)
		{
			b[l-1-j]=a[j];
		}
		
		for(j=0;j<l;j++)
		{
			if(b[j]!=a[j])
			{
				v=1;
				break;
			}
		}
		
		if(v==1)
		{
			printf("no\n");
		}
	    if(v==0)
	    {
	    	printf("yes\n");
		}
	}
}
