#include<bits/stdc++.h>
using namespace std;                 
int main(void)
{
	char a[50]="";
	memset(a,0,sizeof(a));
	long long int b=0;
	scanf("%s%lld",a+1,&b);//�ӵ�һλ��ʼ�洢 
    long long int l=0; long long int t=0;
	t=l=strlen(a+1);
	cout<<a;
	
	while(t<b)    
	{
		t=t*2;  //���Ȳ��Ϸ��� 
	}
	
	while(t!=l)  
	{
		t=t/2;//���ȼ���
		
		if(b>t)
		{   
		    if(b-t-1!=0)
			b=b-t-1;
			if(b-t-1==0)
			{
				b=t;
			}
		} 
		
		
		
		
		
		if(b<l)
		{
			b=b;//�ص���������ַ��� 
		}
	}
	
	printf("%c",a[b]);
	
	return 0;
}
