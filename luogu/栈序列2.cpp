#include<bits/stdc++.h>
#include<stack> 
//ֻ����֤���ܵĳ�ջ˳�򣬲�һ����ȫ����ջ�˲ų�ջ 
using namespace std;
stack<int>q;//����ջ���� 
int main()
{ 
	int p=0; int n=0;int k=0;
	cin>>p;
	for(k=1;k<=p;k++)
	{    
	    int i=0; int j=1; 
	    cin>>n;
	    int a[n+1]; int b[n+1];
	    memset(a,0,sizeof(a)); memset(b,0,sizeof(b));
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			cin>>b[i];
		}
		for(i=1;i<=n;i++)
		{  
		    q.push(a[i]);
			while(q.top()==b[j])
			{
				q.pop(),j++;
				if(q.empty()) break;
			}
		}
		if(q.empty())
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl; 
		}
		while(q.empty()==0)
		{
			q.pop();
		}
	}
	return 0;
} 
