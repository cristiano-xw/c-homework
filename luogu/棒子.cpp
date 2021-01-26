//四条木棒 想要组成正三角形 必须有两条棒子长度相同 另外两条相加
#include<bits/stdc++.h>
using namespace std;
const int m=1000000007; 
int c[11111]={};//一个数出现的次数 
int maxx=0;
int t1=0; int t2=0;int t=0;
int main(void)
{
	memset(c,0,sizeof(c));
	int n=0; scanf("%d",&n);
	int i=0; 
	
	for(i=0;i<n;i++)
	{
		int  k=0;
		scanf("%d",&k);
		c[k]++;
		if(k>maxx)
		maxx=k;
	} 
	
	//必须要有相同长度的棒子才可以构成两边
	//组成一边的棒子可以相同 也可以不同
	
	int j=0;
	for(i=1;i<=maxx;i++) //两条边
	{   
	    if(c[i]>=2)
	    {
		for(j=1;j*2<=i;j++) //选取两条短边的较长边 避免重复
		{
		if(j*2==i&&c[j]>=2)
		{
			t1=((c[j]*(c[j]-1)/2)*(c[i]*(c[i]-1)/2)+t1)%m;
	    } 
		if(j*2!=i)
		{
		    t2=((c[i]*(c[i]-1)/2)*(c[j]*c[i-j])+t2)%m;	
		} 
		} 
	    }
	}

   t=(t1+t2)%m;
	printf("%d",t);
	return 0;
}
