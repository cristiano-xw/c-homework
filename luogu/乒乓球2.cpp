#include<iostream>
#include<string.h>
#include<math.h>
//当cin>>从缓冲区中读取数据时，若缓冲区中第一个字符是空格、tab或换行这些分隔符时，
//cin>>会将其忽略并清除，继续读取下一个字符，若缓冲区为空，则继续等待。
//但是如果读取成功，字符后面的分隔符是残留在缓冲区的，cin>>不做处理。 
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
	l=strlen(a)-1;//cin输入时没有读取回车 
	//cout<<l;
	
	int p=0;int q=0;//分别用来储存数据 
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
