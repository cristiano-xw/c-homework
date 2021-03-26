#include<bits/stdc++.h>
using namespace std;
int n=0;
int a1[100010],a2[100010];
int s[100010];
int b[100010];
int ans=0;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a1[i];
        s[a1[i]]=i;
    }
    
    for(int i=1;i<=n;i++)
    {
    	cin>>a2[i];
	}
    
  	for(int i=1;i<=n;i++)
  	{
  		if(s[a2[i]]>b[ans])
		{
			b[++ans]=s[a2[i]];
			continue;  	
		}	
			int t=lower_bound(b+1,b+ans+1,s[a2[i]])-b;
			b[t]=s[a2[i]];
	 
	}
	
	cout<<ans;
	
    return 0;
}
