#include<stdio.h>
#include<string.h>
//�߾��ȼӷ� 
int main(void)
{
	//���������롣a,b \leq 10^{500}a,b��10��500�η�
	
	char a[10000]={0};
	char b[10000]={0};
	char c[10000]={0};
	char d[10000]={0};
	char s[10000]={0};
	scanf("%s",a);
	scanf("%s",b); //���ַ���ʽ����������
	
	int l1=0;
	int l2=0;
	l1=strlen(a);
	l2=strlen(b);
	
	//����һ������˵�����λΪ��0λ�����λΪl-1λ
	
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
	
	int temp=0; //��λ����Ϊ0 
	
	if(l1==l2)//������� 
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
	
	if(l1<l2)//������� 
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
