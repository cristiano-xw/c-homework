#include<bits/stdc++.h>
#include<vector>
#define mod 23333
using namespace std;
vector<string>linker[mod+2];
string s;int ans=0; 
inline void insert()
{
	int hash=1;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
    	hash=(hash*135+s[i])%mod;
	}
	
	string t=s;
	for(int i=0; i<linker[hash].size();i++)
	{
		if(linker[hash][i]==t)
		return ;
	}
	linker[hash].push_back(t);
	ans++;
}

int main()
{   
    int n=0;
	cin>>n;
	int i=1;
	for(i=1;i<=n;i++)
	{
		cin>>s;
		insert();
	}
	cout<<ans;
	return 0;
}
