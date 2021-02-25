#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int n=0;  int i=0;
	cin>>n;
	cin>>a;
	for(i=2;i<=n;i++)
	{   
	    string b;
		cin>>b;
		int x=a.find(b[0]);//再母串中找到子节点位置 
		a.erase(x,1);//删除节点 
		a.insert(x,b);
	}
	int k=a.size();
	for(i=0;i<k;i++)
	{
		if(a[i]!='*')
		cout<<a[i];
	}
	return 0;
}
