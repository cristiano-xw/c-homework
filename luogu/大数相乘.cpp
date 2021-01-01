#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[50000]="0";
	char b[50000]="0";
	char c[50000]="0";
	char d[50000]="0";
	char s[50000]="0";
	
	memset(s,0,sizeof(s));//一定要将数组清空 
	
	scanf("%s",a);
	scanf("%s",b);
	
	int l1=0;
	int l2=0;
	l1=strlen(a);
	l2=strlen(b);
	
	int i=0;
	int temp=0;
	for(i=l1-1;i>=0;i--)
	{
		c[l1-1-i]=a[i]-'0';
	}
	
	for(i=l2-1;i>=0;i--)
	{
		d[l2-1-i]=b[i]-'0';
	}
	
	 
	
	int j=0;
	
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)   
		{
			s[i+j]+=c[i]*d[j];
		}
	}
	
	
	int k=l1+l2;
	for(i=0;i<k;i++)
	{
		if(s[i]>=10)
		{
			s[i+1]+=s[i]/10;
			s[i]=s[i]%10;
		}
	}
	int v=0;
	
	i=k-1;
	while(s[i]==0)
	{
		v++;
		i--;
	}
	
	 
	if(a[0]!='0'&&b[0]!='0')
	{
	for(i=k-v-1;i>=0;i--)
	{
		printf("%d",s[i]);
	}
    }
    
    if(a[0]=='0'||b[0]=='0')
    {
    	printf("0");
	}
	
	return  0;
}
