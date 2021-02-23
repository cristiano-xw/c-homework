#include<bits/stdc++.h> 
using namespace std;
stack<int>q; 
int p,n; 
int main()
{
	cin>>p;
    int k=0;
    for(k=1;k<=p;k++) 
	{   
		cin>>n;
		int a[n+1],b[n+1];
		int i=0; int j=1; 
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++)
		cin>>b[i]; 
		for(i=1;i<=n;i++)
		{
			q.push(a[i]); 
			while((q.top())==b[j])  
			{
				q.pop();j++; 
				if(q.empty())
				{
				break;
			    }
			}
		}
		if(q.empty()) 
		{
		cout<<"Yes"<<endl;
	    }
		else cout<<"No"<<endl;
		while(!q.empty())
		{q.pop();}  
	}
	return 0; 
}
