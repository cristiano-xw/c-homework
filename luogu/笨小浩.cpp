#include<stdio.h>
#include<string.h>
int main(void)
{   
    int maxn=0,minn=100; 
    int m=0;
	char a[100]="0";
    int sum[100]={0};
	scanf("%s",a);
	int l=0,i=0;
	l=strlen(a);
	for(i=0;i<l;i++)//遍历字符串中的每一个字母 
	{
		sum[a[i]-'a']++; //a对应0 b对应1  
	}
	for(i=0;i<26;i++)
	{
	 if(sum[i]>maxn)
	 {
	 	maxn=sum[i];
	 }
	 if(sum[i]<minn&&sum[i]>0)
	 {
	 	minn=sum[i];
	 }
	}
	
	 
	 
	m=maxn-minn;
	int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97}; 
	for(i=0;i<25;i++)
	{
		if(prime[i]==m)
		{
			printf("Lucky Word\n");
			printf("%d\n",m);
			return 0;
		}
	}
			printf("No Answer\n");
			printf("0");
			return 0;
	
}
