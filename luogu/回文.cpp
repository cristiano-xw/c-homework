#include<stdio.h>
#include<string.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
    	char a[111]="0";
    	char b[111]="0";
    	scanf("%s",a);
    	int l1=0;int l2=0;
    	l1=strlen(a);
    	int j=0;
    	for(j=0;j<l1;j++)
    	{
    		b[l1-1-j]=a[j];
		}
    	if(strcmp(a,b)==0)
    	{
    		printf("Yes\n");
		}
		
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
