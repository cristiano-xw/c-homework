#include<bits/stdc++.h>
#include<map>
using namespace std;
map<string,string>fa;//����ͼ�� 

inline string find(string x)
{
	if(x==fa[x]) return x;
	return fa[x]=find(fa[x]);
}

int main()
{ 
    
	string s1,s2,s3;
	char ch;
	cin>>ch;//�����ʶ��
	
	while(ch!='$')
	{
		if(ch=='#')
		{
			cin>>s1;//�浽���� 
			if(fa[s1]=="") fa[s1]=s1; 
		}
		if(ch=='+')
		{
			cin>>s2;
			fa[s2]=s1;
		}
		if(ch=='?')
		{
			cin>>s3;
			cout<<s3<<" "<<find(s3)<<endl;
		}
		cin>>ch;
	} 
	
	return 0;
}
