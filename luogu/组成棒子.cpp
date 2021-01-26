#include<iostream>
#include<cstring>
using namespace std;
const int M=1000000007;
int n,x,c[5003],ans=0,u=-2e9,ch;
int main()
{
    cin>>n;
    for(int i=1;i<=n;++i)
	{
        cin>>x;
        c[x]++;
        if(u<x) 
		u=x;//找出最大的数 
    }
    
    for(int i=1;i<=u;++i)               
	{  
	    if(c[i]>=2)
	    {
        for(int j=0;j*2<=i;++j) 
		{
        	if(2*j==i) ch=c[j]*(c[j]-1)/2;//两条棒子相同长 
        	else ch=c[j]*c[i-j];
            ans=(ans+ch*c[i]*(c[i]-1)/2)%M;
        }
        }
    }
    
	cout<<ans;
    return 0;
}
