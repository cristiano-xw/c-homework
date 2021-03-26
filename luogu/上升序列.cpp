#include<bits/stdc++.h>
using namespace std;
int n;
int a1[100010];
int a2[100010];
int s[100010];
int b[100010]; int len=0;
int main()
{
    scanf("%d",&n);
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
        if(s[a2[i]]>b[len])
        {
            b[++len]=s[a2[i]];
            continue;
        }
        int t=lower_bound(b+1,b+len+1,s[a2[i]])-b;
        b[t]=s[a2[i]];
    }
    cout<<len;
    return 0;
}
