#include<bits/stdc++.h>
#include<map>
using namespace std;
map<string,int>s;
int main()
{
	int n=0; int i=0; int ans=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		string name; int score; int k=0;
		cin>>k;
		if(k==1)
		{
			cin>>name; cin>>score;
			if(!s[name])
			{
				ans++;
			}
			s[name]=score;
			cout<<"OK"<<endl;
		} 
		if(k==2)
		{
			cin>>name;
			if(!s[name]) cout<<"Not found"<<endl;
			else cout<<s[name]<<endl;
		}
		
		if(k==3)
		{
			cin>>name;
			if(!s[name]) cout<<"Not found"<<endl;
			else
			{
				ans--;
				s[name]=0;
				cout<<"Deleted successfully"<<endl;
			}
		}
		
		if(k==4)
		{
			cout<<ans<<endl;
		}
	}
	return 0;
}
