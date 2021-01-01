#include<stdio.h>
#include<string.h>
//高精度加法 
int main(void)
{
	//分两行输入。a,b \leq 10^{500}a,b≤10的500次方
	
	char a[10000]={0};
	char b[10000]={0};
	char c[10000]={0};
	char d[10000]={0};
	char s[10000]={0};
	scanf("%s",a);
	scanf("%s",b); //以字符形式存入两个数
	
	int l1=0;
	int l2=0;
	l1=strlen(a);
	l2=strlen(b);
	
	//对于一个数来说，最高位为第0位，最低位为l-1位
	
	int i=0;
	
	for(i=0;i<l1;i++)
	{
		c[l1-1-i]=a[i];
	}
	
	for(i=0;i<l2;i++)
	{
		d[l2-1-i]=b[i];  
	}
	
	//printf("%s",c);
	//printf("%s",d);
	
	int temp=0; //进位先设为0 
	
	if(l1==l2)//长度相等 
	{   
	    
		for(i=0;i<l1;i++)
		{   
		      
			s[i]=c[i]-'0'+d[i]-'0'+temp;
			temp=0;
			if(s[i]>=10)
			{
				s[i]=s[i]%10;
				temp=1;
			}
			
		}
		
		
		for(i=l1-1;i>=0;i--)
		{
			printf("%d",s[i]); 
		}
	} 
	
	
	if(l1>l2) 
	{   
	    for(i=l2;i<l1;i++)
	    {
	    	d[i]='0';
		}
		
		for(i=0;i<l1;i++)
		{   
			s[i]=c[i]-'0'+d[i]-'0'+temp;
			temp=0;
			if(s[i]>=10)
			{
				s[i]=s[i]%10;
				temp=1;
			}
			
		}
		
			if(temp==1)
		{
			s[l1-1]=s[l1-1]%10;
			s[l1]=1;
		}
		
		if(temp==0)	 
		{  
		for(i=l1-1;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	    }
	    
	    if(temp==1)	  
		{  
		for(i=l1;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	    }
	    
		
		for(i=l1-1;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	} 
	
	if(l1<l2)//长度相等 
	{   
	    for(i=l1;i<l2;i++)
	    {
	    	c[i]='0';
		}
		
		for(i=0;i<l2;i++)
		{   
		    
			s[i]=c[i]-'0'+d[i]-'0'+temp;
			temp=0;
			if(s[i]>=10)
			{
				s[i]=s[i]%10;
				temp=1;
			}
			
		}
		
		if(temp==1)
		{
			s[l2-1]=s[l2-1]%10;
			s[l2]=1;
		}
		
		if(temp==0)	 
		{  
		for(i=l2-1;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	    }
	    
	    if(temp==1)	  
		{  
		for(i=l2;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	    }
	    
	    
	} 
	
	
	
	
	
	 
	return 0;
	
	 
}
