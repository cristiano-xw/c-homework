#include<bits/stdc++.h>
using namespace std;
stack<int>a;//ππ‘Ï’ª 
int main()
{   
	char ch;//int t=0;
	int s=0; int x=0; int y=0;
	do
	{   
		scanf("%c",&ch);
		//cout<<"0l";
		if(ch>='0'&&ch<='9')
		{
			s=s*10+ch-'0';
		}
		
		if(ch=='.')
		{
			a.push(s);
			s=0;//«Âø’ 
		}
		
		if(ch=='+'||ch=='-'||ch=='*'||ch=='/') 
		{   
			x=a.top(); a.pop();
			y=a.top(); a.pop();
		    if(ch=='+') a.push(x+y); 
		    if(ch=='-') a.push(y-x); 
		    if(ch=='*') a.push(x*y); 
		    if(ch=='/') a.push(y/x); 
		}
		 
	}while(ch!='@');
	
	printf("%d",a.top());      
	return 0;
}
