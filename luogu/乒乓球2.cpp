#include<iostream>
#include<string.h>
#include<math.h>
//��cin>>�ӻ������ж�ȡ����ʱ�����������е�һ���ַ��ǿո�tab������Щ�ָ���ʱ��
//cin>>�Ὣ����Բ������������ȡ��һ���ַ�����������Ϊ�գ�������ȴ���
//���������ȡ�ɹ����ַ�����ķָ����ǲ����ڻ������ģ�cin>>�������� 
using namespace std;
int main(void)
{   
    char a[111111]="0";
    int i=0;
    while(a[i-1]!='E')
    {
    	cin>>a[i];
    	//scanf("%c",&a[i]);
    	i++;
	}  
	
	int l=0;
	l=strlen(a)-1;//cin����ʱû�ж�ȡ�س� 
	//cout<<l;
	
	int p=0;int q=0;//�ֱ������������� 
	for(i=0;i<l;i++)
	{
		if(a[i]=='W')
		{
			p++;
		}
		if(a[i]=='L')
		{
			q++;
		}
		
		if((p>=11||q>=11)&&abs(p-q)>=2)         
		{
			cout<<p<<":"<<q;
			cout<<endl;
			p=0;q=0;
		}
		
		if(p>=11&&q>=11&&abs(p-q)>=2)
		{
			cout<<p<<":"<<q;
			cout<<endl;
			p=0;q=0;
		}
		
	}
	
	cout<<p<<":"<<q<<endl<<endl;
	p=0;q=0;
	for(i=0;i<l;i++)
	{
		if(a[i]=='W')
		{
			p++;
		}
		if(a[i]=='L')
		{
			q++;
		}
		
		if((p>=21||q>=21)&&abs(p-q)>=2)         
		{
			cout<<p<<":"<<q;
			cout<<endl;
			p=0;q=0;
		}
		
		if(p>=21&&q>=21&&abs(p-q)>=2)
		{
			cout<<p<<":"<<q;
			cout<<endl;
			p=0;q=0;
		}
		
	}
	
	cout<<p<<":"<<q<<endl ;
	
		
	
	
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
