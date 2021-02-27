#include<bits/stdc++.h>
#include<vector>
#define mod 23333
using namespace std;
vector <pair<int,int> >linker[mod+5];
string a; string b;

inline void insert(int x)//����hash���� 
{
	int i=0;
	for(i=0;i<linker[x%mod].size();i++)
	{
		if(linker[x%mod][i].first==x) 
		{
			linker[x%mod][i].second++;
			break;
		}
	}
	
	linker[x%mod].push_back(pair<int,int>(x,1));//hash�������� 
}

inline int gethash(string a,string b)//�ַ���ƴ�� 
{
	return (a[0]-'A')+(a[1]-'A')*26+(b[0]-'A')*26*26+(b[1]-'A')*26*26*26;//����hash����ֵ 
}

inline int find(int x)
{
	int i=0;
	for(i=0;i<linker[x%mod].size();i++)
	{
		if(linker[x%mod][i].first==x)
		return linker[x%mod][i].second;
	}
	return 0;
}


int main()
{
	int i=0;int n=0; int ans=0;
	cin>>n;
    for(i=1;i<=n;i++)
    {
    	cin>>a>>b;
    	
    	if(a[0]!=b[0]||a[1]!=b[1])
    	{
    	    ans+=find(gethash(b,a)); 
			insert(gethash(a,b));	
		}
	}
	
	cout<<ans;
	return 0;
}
