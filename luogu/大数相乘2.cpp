#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[50001],b[50001];
    int c[50001],d[50001]; 
    int s[50000]={0};
	 
    scanf("%s",a);
    scanf("%s",b);
    int l1=0;int l2=0;
    int i=0;int j=0;
    
    l1=strlen(a);l2=strlen(b);//计算长度
    for (i=0;i<l1;i++)c[i]=a[l1-i-1]-'0';//将字符串转换成数字 且倒序存入 
    for (i=0;i<l2;i++)d[i]=b[l2-1-i]-'0'; 
    
    for (i=0;i<l1;i++)
	for (j=0;j<l2;j++)
	s[i+j]+=c[i]*d[j]; 
    
    int len=0;
	len=l1+l2;  
	//printf("%d\n",len);
	                                   
    for (i=0;i<len;i++) 
	if (s[i]>=10)  
	{s[i+1]+=s[i]/10;s[i]%=10;}//进位
	
    int v=0;
    for(i=len-1;i>=1;i--)
    {
    	if(s[i]==0)
    	{
    		v++;
		}
		if(s[i]!=0)
		{
			break;
		}
	}
    
	//printf("%d\n",len);
    
	for (i=len-1-v;i>=0;i--)  
    printf("%d",s[i]);
    return 0;
}
