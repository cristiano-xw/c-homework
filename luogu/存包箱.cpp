#include<bits/stdc++.h>
using namespace std; 
int main()
{
	int n=0; int q=0; int k=0; int i=0; int j=0; int s=0;
	cin>>n>>q;
	vector<vector<int> >a(n+1);
	while(q--)
	{
		cin>>s;
		if(s==1)
		{
			cin>>i>>j>>k;
			if(a[i].size()<=j)//¿Õ¼ä²»¹»¹þ 
			{
				a[i].resize(j+1);
			} 
			a[i][j]=k;//¸³Öµ 
		}
		else
		{
			cin>>i>>j;
			cout<<a[i][j]<<endl;
		}
	}
	return 0;
}
