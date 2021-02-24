#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int ans=0;
	string a,b;
	cin>>a>>b;
	int l1=a.length(); int l2=b.length();
	int i=0; int j=0;
	for(i=0;i<l1;i++)
	{
		for(j=1;j<l2;j++)
		{
			if(a[i]==b[j]&&a[i+1]==b[j-1])
			ans++;
		}
	}
	cout<<pow(2,ans)<<endl;
	return 0;
}
