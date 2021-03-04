#include<bits/stdc++.h>  
using namespace std;
int MAX=-1,ans=0;
bool f[11000];

void g(int n,int k)
{
        if (n==0) 
		{f[k]=1;MAX=max(k,MAX);} 
		
        else for (int r=n;r>=1;r--)g(n-r,r*(n-r)+k);
}

int main()
{           
   		int n=0;
        cin>>n;
        memset(f,0,sizeof(f));
        g(n,0);
        
        for (int i=0;i<=MAX;i++)
                if (f[i]) ans++;
                
        cout<<ans;
        return 0;
}
