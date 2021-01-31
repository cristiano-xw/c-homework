//最多可以报两项比赛 而且不可以重合哈哈哈 
//连续不重合问题 按右值顺序排列 
 
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int begin; int end;
} a[111111];


bool cmp(node x,node y)
{
	return x.end<y.end; //按结束顺序从小到大输出 
}

int main(void)
{
	int n=0;
	cin>>n;
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].begin; cin>>a[i].end;
	}
	
	sort(a+1,a+n+1,cmp);
	
	int k=a[1].end;   //表示上一个的结束时间 
	int ans=1;
	
	for(i=2;i<=n;i++)
	{
		if(a[i].begin>=k)
		{
			ans++;
			k=a[i].end;
		}
	}
	
	cout<<ans;
	return 0;
	
}
