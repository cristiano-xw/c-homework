#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+40;
int f[MAXN],n,ans=1e9;
int s[MAXN],q[MAXN];//分别表示该数组中的最大值和数组值的个数 
signed main()
{   
    int top=0;
	memset(s,0,sizeof(s));
	memset(q,0,sizeof(q));
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++) 
	scanf("%d",&f[i]);
	                          
	sort(f+1,f+n+1);
	      
	for(int i=1;i<=n;i++)
	{  
		int pos=lower_bound(q+1,q+top+1,f[i]-1)-q; //查找和f[i]相等的数在哪一组 
		//while(q[pos]==(f[i]-1)&&pos<top) 
	    //pos++; //一直找到相等的最后一个 
	    
		if(pos>top||q[pos]!=(f[i]-1))  
		s[++top]=1,q[top]=f[i]; //无法更新，重开一个组 
		
		else s[pos]++,q[pos]++; //对当前组更新 
	}
	
	cout<<top<<endl;
	for(int i=1;i<=top;i++) ans=min(ans,s[i]); //对所有组取最小值 
	printf("%d\n",ans);
	return 0;
}
